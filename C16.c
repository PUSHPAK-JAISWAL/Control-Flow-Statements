// this is the use of expression in for loop in c
#include <stdio.h>
void main()
{
    char ch;
    for(ch=1;ch;ch=ch+1)// this will work 255 times according to the theory
    {
        printf("hi\n");
    }
}