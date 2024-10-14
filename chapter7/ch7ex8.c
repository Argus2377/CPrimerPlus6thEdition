#include <stdio.h>

#define WAGE1 8.75
#define WAGE2 9.33
#define WAGE3 10.0
#define WAGE4 11.20
#define OVERTIME 1.5
#define FIRST 0.15
#define NEXT 0.2
#define BALANCE 0.25

int main()
{
    int hours = 0, mode = 5;
    float riches = 0.0;
    
    printf("*********************************************************\n");
    printf("Введите число, соответствующее желаемой тарифной ставке или действию:\n");
    printf("1)$8.75/ч                                      2)$9.33/ч\n");
    printf("3)$10.00/ч                                     4)$11.20/ч\n");
    printf("5)Выход\n");
    printf("*********************************************************\n");
    
    printf("Ввод: ");
    scanf("%d", &mode);
    while((mode < 1) || mode > 5)
    {
        printf("*********************************************************\n");
        printf("Ошибка! необходимо ввести число от 1 до 5\n");
        printf("Ввод: ");
        scanf("%d", &mode);
    }
    
    switch(mode)
    {
        case (1):
        {
            riches = WAGE1;
            break;
        }
        
        case (2):
        {
            riches = WAGE2;
            break;
        }
        
        case (3):
        {   
            riches = WAGE3;
            break;
        }
        
        case (4):
        {   
            riches = WAGE4;
            break; 
        }
        
        default:
        {
            goto END;
            break;
        }
    }
    
    printf("*********************************************************\n");
    printf("Введите количество отработанных за неделю часов: ");
    scanf("%d", &hours);
    printf("*********************************************************\n");
    
    riches *= hours;
    
    if(hours > 40)
    {
        riches *= OVERTIME;
    }
    
    printf("Сумма без учёта налогов: $%.2f\n", riches);
        
    if(riches <= 300.0)
    {
        printf("Налоги: $%.2f\nЧистая прибыль: $%.2f\n", (riches * FIRST), (riches - riches * FIRST));
    }
    else if((riches > 300.0) && (riches <= 450.0))
    {
        printf("Налоги: $%.2f\nЧистая прибыль: $%.2f\n", (riches * NEXT), (riches - riches * NEXT));
    }
    else
    {
        printf("Налоги: $%.2f\nЧистая прибыль: $%.2f\n", (riches * BALANCE), (riches - riches * BALANCE));
    }
    
    END:
    
    printf("*********************************************************\n");
    printf("Работа завершена\n");
    printf("*********************************************************\n");

    getchar();
    getchar();
    
    return 0;
}
