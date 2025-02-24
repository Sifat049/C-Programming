/*Program that will take an integer of length one from the terminal
and then display the digit in English.

Sample input 	Sample output
9	nine
0	zero
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter a digit:   ");
    scanf("%d",&num);

    if(num==0)
    {
        printf("          ZERO");
    }
  else     if(num==1)
    {
        printf("          One\n");
    }
  else     if(num==2)
    {
        printf("       Two\n");
    }
    else   if(num==3)
    {
        printf("        \nThree\n");
    }
   else    if(num==04)
    {
        printf("        Four\n");
    }
   else    if(num==5)
    {
        printf("        \nFive\n");
    }
    else   if(num==06)
    {
        printf("         Six\n");
    }
   else    if(num==07)
    {
        printf("        Seven\n");
    }
   else   if(num==8)
    {
        printf("       Eight\n");
    }
   else   if(num==9)
    {
        printf("            Nine\n");
    }
    else
    {
        printf("        Invalid");
    }
    return 0;
}
