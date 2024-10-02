#include <stdio.h>

double cube(double n);

int main()
{
    double num;
    
    printf("Введите число, для расчёта третьей степени: ");
    scanf("%lf", &num);
    printf("%lf в кубе равно %lf\n", num, cube(num));
    
    getchar();
    getchar();
    
    return 0;
}

double cube(double n)
{
    return n * n * n;
}
