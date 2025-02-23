#include<stdio.h>
int main()
{
char x;
    printf("enter any numbr :  ");
    scanf("%c",&x);
    if(x>='a' && x<='z'){
           printf(" %c is Alphabat",x);
    }
 else if(x>='0' &&  x<='9'){
           printf(" %c is digit",x);

 }
 else{
               printf(" %c is special",x);

 }
}
/*Program that will decide whether a number is positive or not.

Sample input 	Sample output
100	Positive
-11.11	Negative
0	Positive
*/
