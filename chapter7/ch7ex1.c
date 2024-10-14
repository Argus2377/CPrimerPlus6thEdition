#include <stdio.h>
#include <ctype.h>

int main()
{
    int spaces = 0, newlines = 0, letters = 0;
    char ch;
    
    while((ch = getchar()) != '#')
    {
        if(ch == ' ')
        {
            spaces++;
        }
        
        if(ch == '\n')
        {
            newlines++;
        }
        
        if(isalpha(ch))
        {
            letters++;
        }
    }
    
    printf("Символов пробела: %d\nCимволов новой строки: %d\nБукв: %d\n", spaces, newlines, letters);
    
    getchar();
    
    return 0;
}
