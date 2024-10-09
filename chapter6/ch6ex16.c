#include <stdio.h>

int main()
{
    float dafna = 100.0, deidra = 100.0;
    int years = 0;
    
    while(deidra<=dafna)
    {
        dafna += 10.0;
        deidra += deidra * 0.05;
        years++;
    }
    
    printf("Спустя %d лет сумма Дейдры будет составлять $%.2f против $%.2f у Дафны", years, deidra, dafna);
    
    getchar();
    
    return 0;
}
