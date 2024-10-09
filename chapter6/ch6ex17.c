#include <stdio.h>

int main()
{
    float chuckylucky = 1000000.0;
    int years = 0;
    
    while(chuckylucky>0)
    {
        chuckylucky += chuckylucky * 0.08;
        chuckylucky -= 100000.0;
        years++;
    }
    
    printf("Спустя %d лет у Чаки Лаки не останется денег", years, chuckylucky);
    
    getchar();
    
    return 0;
}
