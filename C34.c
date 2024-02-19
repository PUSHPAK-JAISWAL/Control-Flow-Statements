#include <stdio.h>
void main()
{
    int i,j;
    i=1;
    for(j=0;j<=10;j+=i)
    {
        i=i+j;
    }
    printf("%d",i);
}