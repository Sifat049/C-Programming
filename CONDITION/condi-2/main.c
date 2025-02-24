/*Program that will decide whether a number is even or odd.

Sample input 	Sample output
50	Even
-77	Odd
0	Even
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;
      printf("Input a number :  ");
    scanf("%d",&number);

   if(number%2==0)
 {
     printf("Even\n");

 }
 else{
     printf("Odd");
 }
    return 0;
}
