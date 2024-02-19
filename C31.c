#include <stdio.h>
void main()
{
    int i =0;
    for(;;)
    {
        if(i==10)
            break;
        printf("%d",++i);
    }
}