/*Let us cover the 'conditional statements' syntax required for solving
beginner's programming problems.
Task

Write a program which does the following

    Accepts the count of test cases - tt
        Each test case has one integer NN

       Output the following for each test case
        If input is less than or equal to 100100, output 'Good'
        If input is greater than 100 but less than or equal to 200200, output 'Better'
        If the input is greater than 200, output 'Best'


*/#include <stdio.h>

int main()
{



        int t;
        printf("the count of test cases : ");
        scanf("%d", &t);
        int a;

        while(t--)
 printf("Each test case has one integer  : ");

        {
            scanf("%d", &a);
          {
              if (a % 3==0)
            {
                printf("disible by 3\n");
            }
else
            {
                printf("not disible by 3\n");
            }
          }



             if (a%2==0)
            {
                printf("even\n");
            }
            else {
                printf("odd");
            }

        }


        return 0;
    }

