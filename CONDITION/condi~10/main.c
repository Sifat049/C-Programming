#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number1,number2,result;
    char operators;
    printf("Input operators: ");
    scanf("%c",&operators);
    printf("Input number1: ");
    scanf("%lf",&number1);
    printf("Input number2: ");
    scanf("%lf",&number2);


    if(operators=='+')
    {
        result=number1+number2;
        printf("Addition : %.02lf\n",result);
    }
    else if(operators=='-')
    {
        result=number1-number2;
        printf("Subtraction : %.02lf\n",result);
    }
    else if(operators=='*')
    {
        result=number1*number2;
        printf("multiplication : %.02lf\n",result);
    }
    else if(operators=='/')
        {
            if(number2!=0)
    {
        result=number1/number2;
        printf("division : %.02lf\n",result);
        }
        else

            {
                printf("Division: Zero as divisor is not valid!\n");
            }

      }
    else
    {
        printf("Invalid operator!\n");
    }

return 0;
}
