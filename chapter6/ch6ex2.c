#include<stdio.h>

int main()
{
    for(int q = 0; q<=5; q++)
    {
        for(int i =0; i<q; i++)
        {
            printf("$");
        }
        printf("\n");
    }
    
    getchar();
    
    return 0;
}
