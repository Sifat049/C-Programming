/*Program that will take two numbers X & Y as inputs and decide whether
 X is greater than/less than/equal to Y.

Sample input (X,Y)	Sample output
5   -10	5 is greater than -10
5    10	5 is less than 10
5     5	5 is equal to 5


*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,Y;

    printf("Enter X: ");
    scanf("%d",&X);
    printf("Enter Y: ");
    scanf("%d",&Y);

    if(X>Y)
    {
        printf("     %d   is greater than   %d",X,Y);
    }
     else if(X<Y)
    {
        printf("    %d   is Less than    %d",X,Y);
    }
    else
    {
        printf("    %d   is Equal    %d",X,Y);
    }



    return 0;
}
