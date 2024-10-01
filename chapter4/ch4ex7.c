#include <stdio.h>
#include <float.h>

int main()
{
    float flt = 1.0/3.0;
    double dbl = 1.0/3.0;
    
    printf("1)float:  %.4f\n  double: %.4f\n", flt, dbl);
    printf("2)float:  %.12f\n  double: %.12f\n", flt, dbl);
    printf("3)float:  %.16f\n  double: %.16f\n", flt, dbl);
    printf("\n FLT_DIG: %f\n DBL_DIG: %f", FLT_DIG, DBL_DIG);
    
    getchar();
    
    return 0;
}
