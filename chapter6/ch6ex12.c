#include <stdio.h>

int main()
{
    int n = 1;
    double sum1 = 0.0, sum2 = 0.0;
    int sign = 1;
    
    while(n>0)
    {
        printf("Введите количество элементов последовательности(<=0 для выхода): ");
        scanf("%d", &n);
        
        for(int i = 1; i<=n; i++)
        {
            sum1 += (double)(1.0 / i);
        }
        
        for(int i = 1; i<=n; i++)
        {
            sum2 += 1.0 / i * sign;
            sign *= -1;
        }
        
        printf("Сумма %d элементов первой последовательности: %lf\n", n, sum1);
        printf("Сумма %d элементов второй последовательности: %lf\n", n, sum2);
    }
    
    getchar();
    getchar();
    
    return 0;
}
