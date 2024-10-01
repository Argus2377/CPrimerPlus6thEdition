#include <stdio.h>

int main()
{
    float length;
    char name[40];
    
    printf("Введите ваше имя и рост в сантиметрах: ");
    scanf("%s %f", name, &length);
    printf("%s, ваш рост составляет %.3f метра", name, length / 100);
    
    getchar();
    getchar();
    
    return 0;
}
