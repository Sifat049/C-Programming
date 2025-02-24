/*1.		Program that will decide whether a year is leap year or not.

Yes, if ( Year % 4 == 0 && year % 100 != 0 )   ||  ( )

Sample input 	Sample output
2000	Yes
2004	Yes
2014	No

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter any year :  ");
    scanf("%d",&year);
    if((year % 400 ==0)  || ( year % 4 == 0 &&  year % 100 != 0 ) )
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
