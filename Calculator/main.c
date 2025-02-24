#include <stdio.h>
#include <stdlib.h>

int main()
{
  double num1, num2;
  char operators;


  printf(" Enter any operators (+ ,- ,*, /):    ");
  scanf("%c",&operators);

  printf(" Enter any two num :   ");
  scanf("%lf %lf",&num1, &num2);



  switch(operators)
  {
  case '+':
    {
        printf("%lf + %lf=%lf\n",num1,num2,num1+num2);
        break;
    }
     case '-':
    {
        printf("%lf - %lf=     %lf\n",num1,num2,num1-num2);
        break;
    }
     case '*':
    {
        printf("%lf * %lf=    %lf\n",num1,num2,num1*num2);
        break;
    }
     case '/':
    {
        printf("%lf / %lf=   %lf\n",num1,num2,num1/num2);
        break;
    }
     default :
       printf(" Invalid Operators");
  }
    return 0;
}
