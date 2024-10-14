#include <stdio.h>

int main()
{

    char ch;
    int replace = 0;
    
    while((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case '.':
            {
                printf("!");
                replace++;
                break;
            }
            
            case '!':
            {
                printf("%c!", ch);
                replace++;
                break;
            }
            
            default:
            {
                printf("%c", ch);
            }
        }
    }
    
    printf("Совершено замен: %d", replace);
    
    getchar();
    getchar();
    
    return 0;
}
