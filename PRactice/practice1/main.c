#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m;
   float n;
   /*
The scanf function and uses of arithmetic oprators
9.	Write a C program where you will declare an integer and a floating point variable, input them using scanf, and print these values.
Sample input	Sample output
17 3.508	 Integer value = 17
                    Floating point value = 3.508
*/

   printf("enter a integer num:");
   scanf("%d",&m);
   printf("enter a floating num:");
   scanf("%f",&n);


   printf("Integer value:%d\n",m);
   printf("Integer value:%f ",n);

    return 0;
}
