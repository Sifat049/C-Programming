/*02
Write a C program which will take as input the height of
 an object in centimeters, and represent it in
meter-centimeter format.
Sample input Sample output
157 1 meter 57 centimeter
2309 23 meter 9 centimeter */



#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    printf("Enter the height in cm :   ");
    scanf("%d",&a);
    int  meter=a/100;
    int cm=a%100;
    printf("  %d  meter  %d  centimeters",meter,cm);
    return 0;
}


