/*Program that will take as inputs and decide whether X
is greater than/less than/equal to Y.

Sample input (X,Y)	Sample output
5   -10	                   5 is greater than -10
5    10	                   5 is less than 10
5     5	                       5 is equal to 5

*/


#include<stdio.h>
int main()
{

    int X,Y;
    printf("    two numbers X & Y :    ");
    scanf("%d %d",&X,&Y);

    if(X>Y)
    {
        printf("%d     is greater than    %d\n",X,Y);
    }
     else if(X<Y)
    {
        printf("%d      is Less than    %d\n",X,Y);
    }
      else if(X==Y)
    {
        printf("%d   EQUAL    %d\n",X,Y);
    }
}
