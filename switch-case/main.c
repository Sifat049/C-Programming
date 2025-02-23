/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    double a,b,c;
    char choice;
    printf("enter a,b:  ");
    scanf("%lf %lf ",&a,&b);
     printf("enter choice :  ");
      scanf("%c",&choice);
    switch(choice)
    {

        {
              case '+':
                  c=a+b
                   printf("sum:%lf \n",c);
        break ;
        }
        {
            case '-': c=a-b
                printf("sub:%lf  \n",c);
        break ;
        }
       {
           case '*': printf("multi:%lf   ",a*b);
        break ;
       }
       {
            case '/': printf("div:%lf \n",a/b);
        break ;
       }



    }


    return 0;
}
*/
#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Input
    printf("Enter the expression in the format <number1> <operator> <number2>: ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    // Perform the calculation and check for division by zero
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Addition: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Subtraction: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Multiplication: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Division: %.6lf\n", result);
            } else {
                printf("Division: Zero as divisor is not valid!\n");
            }
            break;
        default:
            printf("Invalid operator: %c\n", operator);
    }

    return 0;
}

















