/*Program that will decide whether a number is positive or not.

Sample input 	Sample output
100	Positive
-11.11	Negative
0	Positive

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number;

    printf("Input a number :  ");
    scanf("%lf",&number);

    if(number>=0)
{
    printf("Positive");

}

 else  if(number<0)
{
    printf("Negative");

}
else
{
    printf("Invalid");
}

    return 0;
}


/*

#include <stdio.h>

int main() {
    float number; // Assuming the input can be a floating-point number
    printf("Enter a number: ");
    scanf("%f", &number);

    if (number > 0) {
        printf("Positive\n");
    } else if (number < 0) {
        printf("Negative\n");
    } else {
        printf("Positive\n"); // 0 is considered positive in this case
    }

    return 0;
}

*/
