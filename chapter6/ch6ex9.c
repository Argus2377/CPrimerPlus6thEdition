#include <stdio.h>

double calculate(double n1, double n2);

int main()
{
    double num1 = 0, num2 = 0;
    
    printf("Введите два числа: ");
    while(scanf("%lf %lf", &num1, &num2))
    {
        printf("Результат: %lf\n", calculate(num1, num2));
        printf("Введите два числа (любой символ для выхода): ");
    }
    
    getchar();
    getchar();
    
    return 0;
}

double calculate(double n1, double n2)
{
    return ((n1 - n2) / (n1 * n2));
}
