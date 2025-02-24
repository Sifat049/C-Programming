#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int year;
    printf("Enter any year:");
    scanf("%d",&year);

    if (year%400==0)
    {
        printf("Leap Year");
    }
    else if (year%4==0 &&  year%100!=0)
    {
        printf("Leap Year");
    }
    else
    {
        printf(" Not Leap Year");
    }
  return 0 ;
}
