#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    /*12.	Write a C program where you will declare four integer variables
     (say a, b, c and d), input them using scanf, and calculate a * b + (a – c) / d + b.
          Sample input	                                Sample output
21      15      34      6	                 21 * 15 + (21 – 34) / 6 + 15 = 327               */

float  a,b,c,d;

printf("enter four num:");
scanf("%f %f %f %f",&a,&b,&c,&d);
printf("a*b+(a-c)/d+b=%f",a*b+(a-c)/d+b);

        return 0;
}
