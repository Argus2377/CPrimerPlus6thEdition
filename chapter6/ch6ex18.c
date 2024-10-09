#include <stdio.h>
#define DANBAR 150

int main()
{
    int friends = 5;
    
    for(int week = 1; (friends - week) * 2 < DANBAR; week++)
    {
        friends = (friends - week) * 2;
        printf("По истечении %d недели у профессора Робинса стало %d друзей\n", week, friends);
    }
    
    getchar();
    
    return 0;
}
