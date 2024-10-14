#include <stdio.h>

#define WAGE 10.0
#define OVERTIME 1.5
#define FIRST 0.15
#define NEXT 0.2
#define BALANCE 0.25

int main()
{
    int hours = 0;
    float riches = 0.0;
    
    printf("Введите количество отработанных за неделю часов: ");
    scanf("%d", &hours);
    
    riches = hours * WAGE;
    
    if(hours > 40)
    {
        riches *= OVERTIME;
    }
    
    printf("Сумма без учёта налогов: $%.2f\n", riches);
        
    if(riches <= 300.0)
    {
        printf("Налоги: $%.2f\nЧистая прибыль: $%.2f", (riches * FIRST), (riches - riches * FIRST));
    }
    else if((riches > 300.0) && (riches <= 450.0))
    {
        printf("Налоги: $%.2f\nЧистая прибыль: $%.2f", (riches * NEXT), (riches - riches * NEXT));
    }
    else
    {
        printf("Налоги: $%.2f\nЧистая прибыль: $%.2f", (riches * BALANCE), (riches - riches * BALANCE));
    }

    getchar();
    getchar();
    
    return 0;
}
