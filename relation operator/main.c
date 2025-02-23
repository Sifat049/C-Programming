#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a;
    printf("enter an integer=");
    scanf("%d",&a);
    if (a%2==0)
        printf("even \n");
    if (a%2!=0)
    printf("odd");


    int b;
    printf("enter an integer=");
    scanf("%d",&b);
    if (b%2==0)
        printf("even \n");
    else
    printf("odd");

    return 0;
}
