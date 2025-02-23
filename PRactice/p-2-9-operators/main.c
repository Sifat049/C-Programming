#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    /*1.		Program that will evaluate the following equations -
X = a – b / 3 + c * 2 – 1
Y = a – ( b / ( 3 + c ) * 2) - 1
Z = a – ( ( b / 3) + c * 2) - 1

Sample input (a, b, c)	            Sample output
9     12     3              	                    X = 10
                                                        Y = 4
                                                        Z = -1
*/
float a,b,c;
printf("a,b,c=");
scanf("%f%f%f",&a,&b,&c);
float m=a-b/3+c*2-1;
float n=a-( b/(3+c)*2)-1, Z = a -( ( b / 3) + c * 2) - 1;
printf("X=%f,Y=%f,Z=%f",m,n,Z);



    return 0;
}
