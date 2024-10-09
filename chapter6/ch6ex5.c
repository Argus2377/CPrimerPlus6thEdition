#include<stdio.h>

int main()
{
    char symbol;
    
    printf("Введите букву латинского алфавита, до которой будет строится пирамида:");
    scanf("%c", &symbol);
    
    for(int q = (int)'A'; q<=(int)symbol; q++)
    {
        
        for(int i = (int)symbol; i>=q; i--)
        {
            printf(" ");
        }
        
        for(int i = (int)'A'; i<=q; i++)
        {
            printf("%c", i);
        }
        
        for(int i = q - 1; i>=(int)'A'; i--)
        {
            printf("%c", i);
        }
        
        printf("\n");
    }
    
    getchar();
    getchar();
    
    return 0;
}
