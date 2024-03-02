#include <stdio.h>
#define Even 0
#define odd 1
void main()
{
    int a;
    printf("Enter a number to check. ");
    scanf("%d",&a);
    switch(a%2)
    {
        case Even : printf("The number %d is a even number.",a);
                    break;
        case odd : printf("The number %d is a odd number.",a);
                    break;
        default : printf("default");
    }
}