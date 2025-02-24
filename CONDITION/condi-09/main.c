/*1.		Program that will categorize a single character that is entered at the terminal,
whether it is an alphabet, a digit or a special character.

(Restriction: Without math.h)

Sample input 	Sample output
z	Alphabet
A	Alphabet
8	Digit
*	Special
*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;
   printf("Input any  character :  ");
   scanf("%c",&ch);

   if( ch>='a' && ch<='z' || ch>='A' && ch<='Z'  )
   {
       printf("Alphabet");
   }
   else if (ch>=0 && ch<=9)
   {
       printf("Digit");
   }
   else{
    printf(" Special Character");
   }
    return 0;
}
