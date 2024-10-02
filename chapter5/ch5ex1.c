#include <stdio.h>
#define TIME 60

int main()
{
    float minutes = 1;
    
    while (minutes > 0)
    {
        printf("Введите время в минутах: ");
        scanf("%f", &minutes);
        printf("Это %d часов, %d минут\n", (int)(minutes / TIME),
                                           (int)((int)minutes % TIME));
    }
    
    getchar();
    getchar();
    
    return 0;
}
