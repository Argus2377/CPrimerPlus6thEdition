#include<stdio.h>

int main()
{
    int i = (int)'A';
    
    for(int q = 0; q<=6; q++)
    {
        for(int counter = 0; counter<q; counter++, i++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
    
    getchar();
    
    return 0;
}
