#include <stdio.h>
#define SIZE 8
int main()
{
    double arr1[SIZE], arr2[SIZE];
    
    for(int i = 0; i<SIZE; i++)
    {
        printf("Введите %d элемент массива: ", i + 1);
        scanf("%lf", &arr1[i]);
    }
    
    arr2[0] = arr1[0];
    
    for(int i = 1; i<SIZE; i++)
    {
        arr2[i] = arr2[i-1] + arr1[i];
    }
    
    for(int i = 0; i<SIZE; i++)
    {
        printf("%5.lf ", arr1[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i<SIZE; i++)
    {
        printf("%5.lf ", arr2[i]);
    }
    
    getchar();
    getchar();
    
    return 0;
}
