#include <stdio.h>

int main()
{
    int symbol;
    printf("Введите ASCII-код символа: ");
    scanf("%i",&symbol);
    printf("Это код символа \"%c\"\n", symbol);
    
    getchar();
    getchar();
    
    return 0;
}
