#include <stdio.h>

int main()
{
    float cup;

    printf("Введите объём в чашках: ");
    scanf("%f", &cup);
    printf("\nОбъём в пинтах: %.2f", cup / 2);
    printf("\nОбъём в унциях: %.f", cup * 8);
    printf("\nОбъём в столовых ложках: %.f", cup * 8 * 2);
    printf("\nОбъём в чайных ложках: %.f", cup * 8 * 2 * 3);
    
    getchar();
    getchar();    
    
    return 0;
}
