// find largest among there numbers
#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers to check greatest among them\n");
    scanf("%d \n %d \n %d \n",&a,&b,&c);
    if(a>b && a>c)
        printf("The largest is %d",a);
    else if(b>c && b>a)
        printf("The largest is %d",b);
    else
        printf("The largest is %d",c);
}