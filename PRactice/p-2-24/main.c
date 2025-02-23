#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    /*24.	Write a C program that will calculate the terminal velocity of a moving body
     by using the following equation:
                                               v^2=u^2+2as
	You have to take as input the values of u, a and s in order, and output the value of v (not v^2).
      Sample input	                      Sample output
       5        6       20	                           v = 16.27
*/
int u,a,s;
printf("input the values of u, a and s :");
scanf("%d %d    %d",&u,&a,&s);
printf("U=%d, A=%d, S=%d\n",u,a,s);
float v= sqrt(u*u+2*a*s)   ;
printf("v=%f",v);



    return 0;
}
