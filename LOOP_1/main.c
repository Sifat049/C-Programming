/*1.		Write a program (WAP) that will print following series upto Nth terms.
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, …….

Sample input	      Sample output
      2	                               1, 2
      5	                               1, 2, 3, 4, 5
     11	                               1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11


*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    printf("enter any num :  ");
    scanf("%d",&a);








     for (i=1; i<=a; i=i+2)
    {
        printf("%d\n",i);

    }






    return 0;
}

