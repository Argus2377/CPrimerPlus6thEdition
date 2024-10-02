#include <stdio.h>
#define F 30.48
#define D 2.54

int main()
{
    float length = 1.0;
    
    while(length > 0)
    {
        printf("Введите высоту в сантиметрах (<=0 для выхода из программы): ");
        scanf("%f", &length);
        printf("%.1f см = %d футов, %.1f дюймов\n",
               length,
               (int)(length / F),
               (length - (((int)(length / F)) * F)) / D
              );
    }
    printf("Работа завершена");
    
    getchar();
    getchar();
    
    return 0;
}
