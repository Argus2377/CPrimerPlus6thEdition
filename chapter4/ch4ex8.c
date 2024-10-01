#include <stdio.h>

#define distance 1.609
#define volume 3.785

int main()
{
    float mil, gal;
    
    printf("Введите количество преодолённых миль: ");
    scanf("%f", &mil);
    printf("Введите количество галлонов израсходованного бензина: ");
    scanf("%f", &gal);
    printf("На одном галлоне пройдено %.1f миль\n", mil / gal);
    printf("Расход в литрах на 100км равен %.1f\n", 1 / ((mil * distance) / (gal * volume * 100)));
    
    getchar();
    getchar();
    
    return 0;
}
