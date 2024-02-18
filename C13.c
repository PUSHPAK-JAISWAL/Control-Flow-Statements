// another way to check the greatest among the three numbers
#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the numbers to check the greatest from\n");
    scanf(" %d \n %d \n %d \n",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is largest",a);
    }
    else
    {
        if(b>c)
            printf("%d is largest",b);
        else
            printf("%d is largest",c);
    }
}