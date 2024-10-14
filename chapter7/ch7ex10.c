#include <stdio.h>

#define TAX1 8.75
#define TAX2 9.33
#define TAX3 10.0
#define TAX4 11.20
#define TAXCASH1 17850
#define TAXCASH2 23900
#define TAXCASH3 29750
#define TAXCASH4 14875
#define PERCENT1 0.15
#define PERCENT2 0.28

int main()
{
    int mode = 0;
    float cash = 0.0;
    
    printf("*********************************************************\n");
    printf("Введите облагаемый налогом доход: ");
    scanf("%f", &cash);
    
    while(mode != 5)
    {
        printf("*********************************************************\n");
        printf("Введите число, соответствующее вашей категории:\n");
        printf("1)Одинокий\n");
        printf("2)Глава семейства\n");
        printf("3)Состоит в браке, совместное ведение хозяйства\n");
        printf("4)Состоит в браке, раздельное ведение хозяйства\n");
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
        
        printf("*********************************************************\n");
        
        switch(mode)
        {
            case (1):
            {
                if(cash<TAXCASH1)
                {
                    printf("Сумма с учётом налогов: %.2f\n", cash - cash * PERCENT1);
                }
                else
                {
                    printf("Сумма с учётом налогов: %.2f\n", (TAXCASH1 - TAXCASH1 * PERCENT1) + (cash - TAXCASH1 - ((cash - TAXCASH1) * PERCENT2)));
                }
                
                break;
            }
            
            case (2):
            {
                if(cash<TAXCASH2)
                {
                    printf("Сумма с учётом налогов: %.2f\n", cash - cash * PERCENT1);
                }
                else
                {
                    printf("Сумма с учётом налогов: %.2f\n", (TAXCASH2 - TAXCASH2 * PERCENT1) + (cash - TAXCASH2 - ((cash - TAXCASH2) * PERCENT2)));
                }
                
                break;
            }
            
            case (3):
            {   
                if(cash<TAXCASH3)
                {
                    printf("Сумма с учётом налогов: %.2f\n", cash - cash * PERCENT1);
                }
                else
                {
                    printf("Сумма с учётом налогов: %.2f\n", (TAXCASH3 - TAXCASH3 * PERCENT1) + (cash - TAXCASH3 - ((cash - TAXCASH3) * PERCENT2)));
                }
                
                break;
            }
            
            case (4):
            {   
                if(cash<TAXCASH4)
                {
                    printf("Сумма с учётом налогов: %.2f\n", cash - cash * PERCENT1);
                }
                else
                {
                    printf("Сумма с учётом налогов: %.2f\n", (TAXCASH4 - TAXCASH4 * PERCENT1) + (cash - TAXCASH4 - ((cash - TAXCASH4) * PERCENT2)));
                }
                
                break; 
            }
            
            default:
            {
                break;
            }
        }
    }
    
    printf("Работа завершена\n");
    printf("*********************************************************\n");

    getchar();
    getchar();
    
    return 0;
}
