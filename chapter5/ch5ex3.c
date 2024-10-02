#include <stdio.h>
#define DATE 7

int main()
{
    float days = 1;
    
    while (days > 0)
    {
        printf("Введите количество дней: ");
        scanf("%f", &days);
        printf("%d дней составляют %d недели и %d дня\n",
               (int)days,
               (int)(days / DATE),
               (int)((int)days % DATE));
    }
    
    getchar();
    getchar();
    
    return 0;
}
