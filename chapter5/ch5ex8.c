#include <stdio.h>

int main()
{
    int first = 1, second = 1;
    
    printf("Эта программа вычисляет результат деления по модулю.\n");
    printf("Введите целое число, которое будет сужить вторым операндом:");
    scanf("%d", &second);
    
    while(first > 0)
    {
        printf("Теперь введите первый операнд(<=0 для выхода):");
        scanf("%d", &first);
        printf("%d %% %d равно %d\n", first, second, first % second);
    }
    printf("Готово");
    
    getchar();
    getchar();
    
    return 0;
}
