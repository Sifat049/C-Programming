#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    // LOWER,UPPER
    char lower,upper;
    printf("Enter any lower word:");
    scanf("%c",&lower);

     upper=toupper(lower);
    printf("the Upper word:%c",upper);

    return 0;
}
