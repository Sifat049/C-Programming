/*
1.		Program that will take two numbers as inputs and print the maximum value. (Using conditional operator - ?)

Sample input (x, y)	Sample output
20     100	Max: 100
50     -20	Max: 50


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,result;
    printf( "x,y:   ");
    scanf("%d%d",&x,&y);

    if (x>y)
    printf("%d  MAX\n",x);
       else if (x<y)
    printf("%d  MAX\n",y);

    return 0;
}
*/
#include <stdio.h>

int main() {
    int x, y;

    // Input values for x and y
    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);

    // Use the conditional operator to find the maximum and print the result
    int max = (x > y) ? x : y;
    printf("Max: %d\n", max);

    return 0;
}


