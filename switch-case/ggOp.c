/*
1.		Program that will increment and decrement a number X by
 1 inside the printf function. (Use ++ and - - operators)

Sample input(X)	Sample output
5	                   X++ :    5
                        ++X :    6
X- -  :    5
--X   :    4
-5	X++ :    -5
++X :    -4
X- -  :    -5
--X   :    -6


#include<stdio.h>
int main()
{
    int x;
    printf("enter num : ");
    scanf("%d",&x);
    printf("X++ : %d\n",x);
    printf("X++ : %d\n",++x);
    printf("X++ : %d\n",--x);
    printf("X++ : %d\n",--x);

return 0;
}
*//*
Program that will increment and decrement a number X by Y.
(Use += and -= operators)

Sample input(X,Y)	Sample output
5     10	Incremented Value:    10
Decremented Value:   -5
-5      5	Incremented Value:      0
Decremented Value:   -10



#include<stdio.h>
int main()
{
    int x,y;
    printf("enter num : ");
    scanf("%d%d",&x,&y);
    printf("increment value : %d\n",x+=y);
    printf("deccrement value : %d",x-=y);


return 0;
}
*/

#include <stdio.h>

int main() {
    int X, Y;

    // Sample input
    printf("Enter the value of X: ");
    scanf("%d", &X);
    printf("Enter the value of Y: ");
    scanf("%d", &Y);

    // Increment and decrement using += and -= operators
    X += Y; // Increment X by Y
    printf("Incremented Value: %d\n", X);

    X -= Y; // Decrement X by Y
    printf("Decremented Value: %d\n", X);

    return 0;
}









