//larze number identify from three numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("Larze:%d",a);
    }
   else if(b>a && b>c)
    {
        printf("Larze:%d",b);
    }
   else if(c>a && c>b)
    {
        printf("Larze:%d",c);
    }
    else
    {
        printf("Equal");
    }
    return 0;
}
