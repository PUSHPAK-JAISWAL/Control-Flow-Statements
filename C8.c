// write a program to print if a number is odd or even
// if odd print 1 and if even print 0
#include <stdio.h>
void main()
{
    int a;
    printf("enter a number to check if it is odd");
    scanf("%d",&a);
    if(a%2!=0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
