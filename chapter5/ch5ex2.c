#include <stdio.h>

int main()
{
    int num;
    
    printf("Введите целое число: ");
    scanf("%d", &num);
    
    int i = num;
    
    while(i <= num + 10)
    {
        printf("%d\n", i);
        i++;
    }
    
    getchar();
    getchar();
    
    return 0;
}
