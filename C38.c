// program to take a number from the user and tell the number of digits in it
#include <stdio.h> 
void main()
{
    int count,n;
    count=0;
    n=0;
    printf("Enter the number to check the digits for.\n");
    scanf("%d",&n);
    while(n>0)// expression in while loop is mandatory
    {
        n =n/10;
        count++;
    }
    printf("The number contains %d digits",count);
}