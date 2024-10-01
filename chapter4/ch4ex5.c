#include <stdio.h>

int main()
{
    unsigned int mbit;
    float mbyte;
    
    printf("Введите скорость загрузки в Мбит/с: ");
    scanf("%ud", &mbit);
    printf("Введите размер файла в МБайт: ");
    scanf("%f", &mbyte);
    printf("При скорости загрузки %i мегабит в секунду файл размером %.2f мегабайт загружается за %.2f секунд(ы).", mbit, mbyte, 
    mbyte * 8 / mbit);
    
    getchar();
    getchar();
    
    return 0;
}
