#include <stdio.h>

int main()
{
    int  minnum = 0, maxnum = 1, result = 0;
    
    printf("Введите нижний и верхний целочисленные пределы: ");
    scanf("%d %d", &minnum, &maxnum);
    
    while(minnum!=maxnum)
    {
        for(int i = minnum; i<=maxnum; i++)
        {
            result += i * i;
        }
        printf("Сумма квадратов целых чисел от %d до %d равна %d\n", minnum*minnum, maxnum*maxnum, result);
    
        printf("Введите следующую комбинацию пределов: ");
        scanf("%d %d", &minnum, &maxnum);
    }
    printf("Работа завершена");
    
    getchar();
    getchar();
    
    return 0;
}
