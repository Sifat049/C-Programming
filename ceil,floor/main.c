#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    double x=.5;
    double result =ceil(x);//uporer dike jabee....
    printf("ceil(%lf): %lf\n",x,result);


    double y=-11.35;
    double result2 =floor(y);
    printf("floor(%lf): %lf",y,result2);



    return 0;
}
