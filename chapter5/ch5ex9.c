#include <stdio.h>

void Temperatures(double gr);

int main()
{
    double graduses;
    
    printf("Введите температуру в Фаренгейтах: ");
    
    while(scanf("%lf", &graduses) > 0)
    {
        Temperatures(graduses);
    }
    
    getchar();
    getchar();
    
    return 0;
}

void Temperatures(double gr)
{
    const double F1 = 5.0 / 9.0;
    const double F2 = 32.0;
    const double K = 273.16;
    
    printf("Температура в Целсиях: %.2lf\n", F1 * (gr - F2));
    printf("Температура в Кельфинах: %.2lf\n", gr + K);
    printf("Введите температуру в Фаренгейтах(введите символ для выхода): ");
}
