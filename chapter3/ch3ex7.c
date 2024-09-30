#include <stdio.h>

int main()
{
    float heigth;

    printf("Введите рост в дюймах: ");
    scanf("%f", &heigth);
    printf("Рост в сантиметрах: %f", heigth * 2.54);
    
    getchar();
    getchar();    
    
    return 0;
}
