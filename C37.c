// this is the product of numbers form 1 to n 
// where n is user based input
#include <stdio.h>
void main()
{
    int i,n,product;
    printf("Enter a number to find the factorical of\n");
    scanf("%d",&n);
    i=1;
    product =1;
    while(i<=n)
    {
        product = product *i;
        i++;
    }
    printf("The factorical of the number %d id %d.",n,product);
}