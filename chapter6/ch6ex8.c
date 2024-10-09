#include <stdio.h>

int main()
{
    double num1 = 0, num2 = 0;
    
    printf("Введите два числа: ");
    while(scanf("%lf %lf", &num1, &num2))
    {
        printf("Результат: %lf\n", (num1 - num2) / (num1 * num2));
        printf("Введите два числа (любой символ для выхода): ");
    }
    
    getchar();
    getchar();
    
    return 0;
}
