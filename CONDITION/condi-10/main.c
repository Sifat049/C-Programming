/*Program that will evaluate simple expressions of the form-

<number1>   <operator>   <number2>

; where operators are (+, - , *, /)

And if the operator is “/”, then check if <number2> nonzero or not.

Sample input 	Sample output
100     *      55.5	Multiplication:  5550
100     /      -5.5	Division:   -18.181818
100    /        0	Division:    Zero as divisor is not valid!
*/


#include <stdio.h>

int main() {
    float number1, number2, result;
    char operator;

    // Input
printf("Enter the expression in the format <number1> : ");
       scanf("%f", &number1);
       printf("Enter the expression in the format <operator> : ");
               scanf("%c",&operator);
       printf("Enter the expression in the format <number2> : ");
           scanf("%f",&number2);

 //   printf("Enter the expression in the format <number1> <operator> <number2>: ");

  //  scanf("%f %c %f", &number1, &operator, &number2);

    // Evaluate the expression based on the operator
    if (operator == '+') {
        result = number1 + number2;
        printf("Addition: %.2f\n", result);
    } else if (operator == '-') {
        result = number1 - number2;
        printf("Subtraction: %.2f\n", result);
    } else if (operator == '*') {
        result = number1 * number2;
        printf("Multiplication: %.2f\n", result);
    } else if (operator == '/') {
        if (number2 != 0) {
            result = number1 / number2;
            printf("Division: %.6f\n", result);
        } else {
            printf("Division: Zero as divisor is not valid!\n");
        }
    } else {
        printf("Invalid operator!\n");
    }

    return 0;
}

