#include <stdio.h>
#define DEGREE 8

int main()
{
    unsigned int degrees[DEGREE];
    
    for(int i = 0; i<DEGREE; i++)
    {
        degrees[i] = 2;
        
        for(int q = 1; q<=i; q++)
        {
            degrees[i] *= 2;
        }
    }
    
    int w = 0;
    do
    {
        printf("%d\n", degrees[w]);
        w++;
    }
    while(w < DEGREE);
    
    getchar();
    
    return 0;
}
