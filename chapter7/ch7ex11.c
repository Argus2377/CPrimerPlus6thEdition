#include <stdio.h>

#define ARTICHOKE 2.05
#define BEETROOT 1.15
#define CARROT 1.09
#define DISCONT 0.05
#define AMOUNT 100
#define DELIVERY1 6.5
#define DELIVERY2_1 14.0
#define DELIVERY2_2 0.5

int main()
{
    char mode = 'z';
    int order[3];
    int buf = 0;
    float bill = 0, sale = 0, delivery = 0;
    
    for(int i=0;i<3;i++)
    {
        order[i]=0;
    }
    
    while(mode!='q')
    {
        printf("*********************************************************\n");
        printf("Введите букву, соответствующую выбранному товару или действию:\n");
        printf("a)Артишоки, $2.05 за фунт\n");
        printf("b)Свёкла,   $1.15 за фунт\n");
        printf("c)Морковь,  $1.09 за фунт\n");
        printf("q)Подсчёт цены и выход\n");
        printf("*********************************************************\n");
        
        printf("Ваш выбор: ");
        scanf(" %c", &mode);
        printf("*********************************************************\n");
        
        while(mode!='a' && mode!='b' && mode!='c' && mode!='q')
        {
            printf("Ошибка! Введено неверное значение!\n");
            printf("Введите значение заново: ");
            scanf(" %c", &mode);
            printf("*********************************************************\n");
        }

        switch(mode)
        {
            case('a'):
            {
                printf("Введите вес артишоков в фунтах: ");
                scanf("%d", &buf);
                order[0] += buf;
                
                break;
            }
            
            case('b'):
            {
                printf("Введите вес свёклы в фунтах: ");
                scanf("%d", &buf);
                order[1] += buf;
                
                break;
            }
            
            case('c'):
            {
                printf("Введите вес моркови в фунтах: ");
                scanf("%d", &buf);
                order[2] += buf;
                
                break;
            }
            
            case('q'):
            {
                
                bill = order[0]*ARTICHOKE + order[1]*BEETROOT + order[2]*CARROT;
                
                if(bill>=100.0)
                {
                    sale = bill * DISCONT;
                }
                
                if((order[0] + order[1] + order[2]) <= 5)
                {
                    delivery = DELIVERY1;
                }
                
                else if(((order[0] + order[1] + order[2]) > 5) && ((order[0] + order[1] + order[2]) < 20))
                {
                    delivery = DELIVERY2_1;
                }
                
                else
                {
                    delivery = DELIVERY2_1 + DELIVERY2_2 * (order[0] + order[1] + order[2]);
                }
                
                printf("*********************************************************\n");
                printf("Ваш заказ:\n\n");
                
                if(order[0] != 0)
                {
                    printf("Артишоки, %d фунтов: $%.2f\n", order[0], order[0]*ARTICHOKE);
                }
                if(order[1] != 0)
                {
                    printf("Свёкла, %d фунтов: $%.2f\n", order[1], order[1]*BEETROOT);
                }
                if(order[2] != 0)
                {
                    printf("Морковь, %d фунтов: $%.2f\n", order[2], order[2]*CARROT);
                }
                
                printf("\nОбщая сумма:$%.2f\n", bill);
                printf("Скидка: -$%.2f\n", sale);
                printf("Доставка: $%.2f\n", delivery);
                printf("--\n");
                printf("Итого: $%.2f\n", bill-sale+delivery);
                printf("*********************************************************\n");
                
                break;
            }
                
            default:
            {
                break;
            }
        }
    }
    
    getchar();
    getchar();
    
    return 0;
}
