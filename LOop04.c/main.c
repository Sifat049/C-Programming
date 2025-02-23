/*Write a program (WAP) that will take two numbers X and Y as inputs.
Then it will print the square of X and increment (if X<Y) or decrement (if X>Y) X
by 1, until X reaches Y. If and when X is equal to Y, the program prints “Reached!”

Sample input(X,Y)	            Sample output
10       5	                         100, 81, 64, 49, 36, Reached!
5         10	                         25, 36, 49, 64, 81, Reached!
10       10                         	Reached!

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i=0;

    printf("Enter two number : ");
    scanf("%d%d",&x,&y);

    while(x!=y)
    {
        printf("%d,",x*x);
        if(x<y)
        {
                                                                                                                                                         //    printf("%d",i--);
            x++;
        }
        else
        {
                                                                                                                                                              //    printf("%d",i++);
            x--;
        }
        i++;
    }
    printf("Reached!\n");

    return 0;
}
