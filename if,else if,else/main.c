#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if (marks>=80)
    {
        printf("Result: A+\n");
    }

   else  if (marks>=70)
    {
        printf("Result: A-\n");
    }

    else if (marks>=60)
    {
        printf("Result: A\n");
    }
    else if (marks<=60    &&  marks>=40)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail");
    }
    return 0;
}
