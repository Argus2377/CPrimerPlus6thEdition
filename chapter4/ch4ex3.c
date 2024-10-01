#include <stdio.h>

int main()
{
    float num;
    
    printf("Введите число с плавающей запятой: ");
    scanf("%f", &num);
    printf("Первый формат записи: %.1f или %.1e\n", num, num);
    printf("Второй формат записи: %+.3f или %.3E\n", num, num);
    
    getchar();
    getchar();
    
    return 0;
}
