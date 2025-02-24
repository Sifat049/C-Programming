/*Program that will construct a menu for performing arithmetic operations.
The user will give two real numbers (a, b) on which the arithmetic operations
will be performed and an integer number (1 <= Choice <= 4) as a choice.
Choice-1, 2, 3, 4 are for performing addition, subtraction, multiplication, division
quotient) respectively.

Sample input (a, b, Choice)	Sample output
5     10
3	                                                 Multiplication: 50
-5     10.5
4	                                                 Quotient: 0


*/





#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    int choice;
    printf("enter any two num :   ");
    scanf("%lf %lf",&a,&b);
 printf("enter your choice :   ");
    scanf("%d",&choice);

    switch(choice)
{
 case 1: printf("Addition: %d",(int)(a+b));
        break;
    case 2: printf("Substraction: %d",(int)(a-b));
        break;
    case 3: printf("Multiplication: %d",(int)(a*b));
        break;
    case 4: printf("Quotient: %d",(int)(a/b));
       break;

}
    return 0;
}
