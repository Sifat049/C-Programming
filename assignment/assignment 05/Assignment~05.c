//assignment 05

#include <stdio.h>
#include <stdlib.h>

int main()
{

    double a,b;
    int choice;
    printf("Enter two real numbers (a and b): ");
    scanf("%lf %lf", &a, &b);
      printf("Enter your choice (1-4): ");
    scanf("%d", &choice);


    if (choice==1)
    {
        printf("Addition: %d",(int)(a+b));

    }
   else if(choice==2)
    {
        printf("Substraction: %d",(int)(a-b));
    }
   else if(choice==3)
    {
        printf("Multiplication: %d",(int)(a*b));
    }
   else if(choice==4)
    {

        printf("Quotient: %d",(int)(a/b)); //output integer ,

    }
    else
        {
            printf("InValid");
        }

    return 0;
}
