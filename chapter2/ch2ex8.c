#include <stdio.h>

void one_three();
void two();

int main()
{
    printf("начинаем:\n");
    one_three();
    printf("порядок!\n");
    
    getchar();
    
    return 0;
}

void two()
{
    printf("два\n");
}

void one_three()
{
    printf("один\n");
    two();
    printf("три\n");
}
