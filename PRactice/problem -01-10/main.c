#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*10.	Write a C program where you will declare two integer variables, input them using scanf, and perform the basic arithmetic operations on them.
Sample input	              Sample output
18             7	                   18 + 7 = 25
                                       18 – 7 = 11
                                       18 * 7 = 126
                                       18 / 7 = 2
                                       18 % 7 = 4                */

   //assign value
   int a,b;

   printf("inter two integer num:");
   scanf("%d     %d",&a,&b);

   printf("ans:%d    %d      %d      %d",a+b ,a-b ,a*b             );



    return 0;
}
