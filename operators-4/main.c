/*1.		Program that will increment and decrement a number X by 1 inside
the printf function. (Use ++ and - - operators)

Sample input(X)	            Sample output
5	                                         X++ :    5
                                              ++X :    6
                                             X- -  :    5
                                              - -X   :    4

-5	                                   X++ :    -5
                                              ++X :    -4
                                             X- -  :    -5
                                            --X   :    -6


*/
#include <stdio.h>

int main() {
    int X;

    // Input value for X
    printf("Enter a number X: ");
    scanf("%d", &X);

    // Use ++ and -- operators inside printf
    printf("X++ : %d\n", X++);
    printf("++X : %d\n", X);
    printf("X-- : %d\n", --X);
    printf("--X : %d\n", --X);

    return 0;
}
