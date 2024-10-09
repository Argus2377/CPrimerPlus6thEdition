#include<stdio.h>
#define a 26

int main()
{
    char alph[a];
    
    for(int q = 0; q<a; q++)
    {
         alph[q] = (char)(((int)'a') + q);
    }
    
    for(int q = 0; q<a; q++)
    {
        printf("%c", alph[q]);
    }
    
    getchar();
    
    return 0;
}
