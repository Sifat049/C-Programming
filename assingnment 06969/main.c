#include <stdio.h>
#include <stdlib.h>
/*
03. Suppose that in a country, there are notes of 1, 5, 10, 50, 100 and 500 units of currencies.
Write a C program which will take as input the amount of money to give, and find out the number
 of each note to provide this amount of money so that a minimal number of notes are given in total.
Sample input Sample output
1627                    3 note(s) of 500
                            1 note(s) of 100
                            0 note(s) of 50
                             2 note(s) of 10
                           1 note(s) of 5
                            2 note(s) of 1

789                    1 note(s) of 500
                           2 note(s) of 100
                          1 note(s) of 50
                              3 note(s) of 10
                         1 note(s) of 5
                           4 note(s) of 1*/
int main()
{

    int x;
    printf("money=");
    scanf("%d",&x);

    int a=x/500;
    int b=x%500;
    int c=b/100;
    int d=b%100;
    int f=d/50;

    printf("500=%d\n",a);
       printf("100=%d\n",c);
  printf("50=%d\n",f);













    return 0;
}
