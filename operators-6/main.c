/*
Program that will multiply and divide a number X by Y. (Use *= and /= operators)

Sample input(X,Y)	Sample output
56       10	                Multiplication:    560
                                       Division:   5
-56      -10	                 Multiplication:    560
                                        Division:   5
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    printf("Enter two integr x,y :   ");
    scanf("%d %d",&x,&y);
    printf(" Multiplication:  %d\n",(x*=y));

    printf(" \nDivision: :  %d",    (x/=y));

    return 0;
}
