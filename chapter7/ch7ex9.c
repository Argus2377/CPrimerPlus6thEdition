#include <stdio.h>

int main()
{
    int num = 0, div = 0;
    _Bool prime = 1;

    
    printf("Введите целое положительное число:");
    scanf("%d", &num);

    for(int q=2; q<num; q++)
    {
        prime = 1;
        
        for(int i=2; i<q; i++)
        {
            if(q % i == 0)
            {
                prime = 0;
            }
            
        }
        
        if (prime == 1)
        {
            printf("%d ", q);
        }
    }

    getchar();
    getchar();
    
    return 0;
}
