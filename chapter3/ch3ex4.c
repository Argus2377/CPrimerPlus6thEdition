#include <stdio.h>

int main()
{
    float num;
    
    printf("Введите значение с плавающей запятой: ");
    scanf("%f", &num);
    printf("Запись с фиксированной запятой: %f", num);
    printf("\nЭкспотенциальная форма записи: %e", num);
    printf("\nДвоично-экспотенциальное представление: %a", num);
    
    getchar();
    getchar();    
    
    return 0;
}
