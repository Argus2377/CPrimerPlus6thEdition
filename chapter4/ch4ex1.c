#include <stdio.h>

int main()
{
    char fname[20], lname[20];
    
    printf("Введите своё имя и фамилию: ");
    scanf("%s %s", fname, lname);
    printf("Ваши фамилия и имя: %s %s",  lname, fname);
    
    getchar();
    getchar();
    
    return 0;
}
