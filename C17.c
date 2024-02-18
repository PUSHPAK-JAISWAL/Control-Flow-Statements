// this is used to check a loop with printf
#include <stdio.h>
void main()
{
    int i = 1;
    for(printf("1");i<=5;printf("3"))
    {
        printf("2");
        i = i+1;
    }
}