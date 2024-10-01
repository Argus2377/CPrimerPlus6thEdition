#include <stdio.h>
#include <string.h>

int main()
{
    char fname[20], lname[20];
    
    printf("Введите своё имя и фамилию: ");
    scanf("%s %s", fname, lname);
    printf("%*s %*s\n", strlen(fname), fname, strlen(lname), lname);
    printf("%*d %*d\n", strlen(fname), strlen(fname), strlen(lname),strlen(lname));
    printf("%*s %*s\n", strlen(fname), fname, strlen(lname), lname);
    printf("%-*d %-*d\n", strlen(fname), strlen(fname), strlen(lname),strlen(lname));
    
    getchar();
    getchar();
    
    return 0;
}
