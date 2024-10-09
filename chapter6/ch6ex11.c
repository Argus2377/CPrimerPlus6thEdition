#include <stdio.h>

int main()
{
    int numbers[8];
    
    for(int i = 0; i<8; i++)
    {
        printf("Введите %d число: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    printf("В обратном порядке: ");
    
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", numbers[i]);
    }
    
    getchar();
    getchar();
    
    return 0;
}
