#include<stdio.h>

int main()
{
    for(int q = (int)'F'; q>=(int)'A'; q--)
    {
        for(int i = (int)'F'; i>=q; i--)
        {
            printf("%c", i);
        }
        printf("\n");
    }
    
    getchar();
    
    return 0;
}
