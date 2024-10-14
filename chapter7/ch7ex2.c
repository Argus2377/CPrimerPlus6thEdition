#include <stdio.h>
#include <ctype.h>

int main()
{
    int counter = 0;
    char ch;
    
    while((ch = getchar()) != '#')
    {
        if(counter++ % 8 == 0)
        {
            printf("\n");
        }
        
        printf("\'%c\':%3d ", ch, (int)ch);
    }
    
    getchar();
    
    return 0;
}
