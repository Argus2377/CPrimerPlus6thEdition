#include <stdio.h>
#include <string.h>

int main()
{
    char STRING[256];
    int i = 0;
    
    printf("Введите строку: ");
    
    do
    {
        scanf("%c", &STRING[i]);
    }
    while(STRING[i++]!='\n');
    
    for(int i = strlen(STRING); i>=0; i--)
    {
        printf("%c", STRING[i]);
    }
    
    getchar();
    
    return 0;
}
