#include <stdio.h>

void jolli();
void deny();

int main()
{
    jolli();
    jolli();
    jolli();
    deny();
    
    getchar();
    
    return 0;
}

void jolli()
{
    printf("Он весёлый молодец!\n");
}

void deny()
{
    printf("Никто не можэт это отрицать!\n");
}
