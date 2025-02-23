/*
Program that will take a, b & c as inputs and decide if the statements are
True (1) of False (0)

	(a+b)≤80 && b≥0
	(a-b)==0 ||c!=0
	a!=b ||(b<a)&&c>0

Sample input (a, b, c)	Sample output
10   -10   0		0
	1
	1
*/

#include <stdio.h>

int main() {
    int a, b, c;

    // Input values for a, b, and c
    printf("Enter the values of a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Evaluate the expressions and print the results
    int result1 = (a + b) <= 80 && b >= 0;
    int result2 = (a - b) == 0 || c != 0;
    int result3 = a != b || (b < a) && c > 0;

    printf("(a + b) <= 80 && b >= 0:    %d\n",      result1);
    printf("(a - b) == 0 || c != 0:    %d\n",     result2);
    printf("a != b || (b < a) && c > 0:     %d\n",         result3);

    return 0;
}

  /* if ((a+b)<=80 && b>=0 )   //||
    {
        printf("1");}
    else
    {
          printf("0");
    }*/
