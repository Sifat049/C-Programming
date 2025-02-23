#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    //UPPER, LOWER
    char lower,upper;
    printf("Enter any lower word:");
    scanf("%c",&upper);

     lower=tolower(upper);
    printf("the Upper word:%c",lower);

    return 0;
}
