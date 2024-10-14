#include <stdio.h>

int main()
{

    char ch, _ch;
    int counter = 0;
    
    while((ch = getchar()) != '#')
    {
        if((ch == 'i') && (_ch == 'e'))
        {
            counter++;
        }
        _ch = ch;
    }
    
    printf("Количество вхождений последовательности \"ei\": %d", counter);
    
    getchar();
    getchar();
    
    return 0;
}
