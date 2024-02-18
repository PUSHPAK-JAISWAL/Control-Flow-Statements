// this is a program to check the maximam from the two numbers
#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 numbers to check the greatest number between them\n");
    scanf("%d \n %d",&a,&b);
    if(a>b)
        printf("The maximam value is  %d \n",a);
    else
        printf("The maximam value is  %d \n",b);
}