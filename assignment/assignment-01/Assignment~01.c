/*   01.Write a C program where you will declare four integer variables
(say a, b, c and d), initialize them
by values of your choice, and calculate

          a * b + (a – c) / d + b
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10, b=5, c=4, d=3,calculate;

    calculate=a * b + (a - c) / d + b;

    printf("a*b+(a-c)/d+b =  %d",calculate);

    return 0;
}
