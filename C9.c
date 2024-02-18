// write a code to check if the number is possitive negative or zero
#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number to check for positive, negative or zero \n \t");
    scanf("%d",&a);
    if(a>0)
        printf("Positive");
    else if(a<0)
        printf("Negative");
    else
        printf("Zero");
}