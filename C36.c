// this is a program to sum the numbers form 1 to n
// where n is taken form the user
#include <stdio.h>
void main()
{
    int i,n,sum;
    printf("Enter the number to find the sum of from 0 to N\n");
    printf("note:= N is the number it self\n");
    scanf("%d\n",&n);
    sum=0;
    i =1;
    while(i<=n)
    {
        sum = sum+i;
        i++;
    }
    printf("The sum of 1 to %d is %d.",n,sum);
}