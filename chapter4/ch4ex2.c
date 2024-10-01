#include <stdio.h>
#include <string.h>

int main()
{
    char name[40];
    
    printf("Введите своё имя: ");
    scanf("%s" , name);
    printf("\"%s\"\n", name);
    printf("\"%+20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%-*s\"\n", strlen(name) + 3, name);
    
    getchar();
    getchar();
    
    return 0;
}
