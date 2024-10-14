#include <stdio.h>

int main()
{
    int num;
    int even = 0, odd = 0;
    float evenaverage = 0, oddaverage = 0;
    
    scanf("%d", &num);
    
    while(num != 0)
    {
        if((num % 2) == 0)
        {
            even++;
            evenaverage += num;
        }
        else
        {
            odd++;
            oddaverage += num;
        }
        
        scanf("%d", &num);
    }
    
    printf("Чётных: %d\nНечётных: %d\nСреднее значение чётных: %f\nСреднее значение нечётных: %f", even, odd, evenaverage/even, oddaverage/odd);
    
    getchar();
    getchar();
    
    return 0;
}
