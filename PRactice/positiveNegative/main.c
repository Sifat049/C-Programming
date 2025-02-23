#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int num;
    printf("Enter an num:");
    scanf("%d",&num);

    if (num>0)
        {
        printf("         Posivte");
    }
    else if (num<0)
        {
        printf("        Negative");
    }
    else
    {
         printf("        Zero");
    }
    return 0;
}
