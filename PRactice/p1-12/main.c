#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    /*16.	Write a C program which will calculate the displacement of a moving body
    by using the following equation:
                         s=ut+1/2 at^2
	You have to take as input u, a and t in order.
	Have you faced any problem regarding the output?
             Sample input                        	Sample output
                5 6 12	                                             s = 492               */


float u,a,t;

                printf("enter three integer num:");
                scanf("%f  %f  %f",&u,&a,&t);

                 float s=u*t+1/2 *a*t;
                printf("s=%f" , s);

    return 0;
}
