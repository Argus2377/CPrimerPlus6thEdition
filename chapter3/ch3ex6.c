#include <stdio.h>

int main()
{
    long double quart;

    printf("Введите количество кварт воды: ");
    scanf("%Lf", &quart);
    printf("Количество молекул в даннном объёме: %e", ((quart * 950.0) / 3.0e-23));
    
    getchar();
    getchar();    
    
    return 0;
}
