#include <stdio.h>

int main()
{

    char ch;
    int replace = 0;
    
    while((ch = getchar()) != '#')
    {
        if(ch == '.')
        {
            printf("!");
            replace++;
        }
        
        else if(ch == '!')
        {
            printf("%c!", ch);
            replace++;
        }
        
        else
        {
            printf("%c", ch);
        }
    }
    
    printf("Совершено замен: %d", replace);
    
    getchar();
    getchar();
    
    return 0;
}
