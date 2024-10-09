#include <stdio.h>

int main()
{
    int  minnum = 0, maxnum = 1;
    
    printf("Введите нижнюю границу целых чисел:");
    scanf("%d", &minnum);

    printf("Введите верхнюю границу целых чисел:");
    scanf("%d", &maxnum);
    
    printf("         n       n^2       n^3\n");
    
    for(int i = minnum; i<=maxnum; i++)
    {
        printf("%10d%10d%10d\n", i, i*i, i*i*i);
    }
    
    getchar();
    getchar();
    
    return 0;
}
