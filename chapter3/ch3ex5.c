#include <stdio.h>

int main()
{
    unsigned int years;
    
    printf("Введите возраст в годах: ");
    scanf("%d", &years);
    printf("Ваш возраст в секундах: %e", years * 3.156E7);
    
    getchar();
    getchar();    
    
    return 0;
}
