#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    double x=10.5;
    double result =round(x);
    printf("round(%lf): %lf\n",x,result);


    double y=11.35;
    double result2 =round(y);
    printf("round(%lf): %lf",y,result2);

    return 0;
}
