/*Program that will read from the console a random positive nonzero number
and determine if it is a power of 2.

Sample input 	Sample output
1	Yes
512	Yes
1022	No
*/
#include <stdio.h>

int main() {
    int n;

    // Read the number from the console
    printf("Enter a positive nonzero number: ");
    scanf("%d", &n);

    // Check if the number is a power of 2
   /* if (number > 0 && (number & (number - 1)) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }*/

    for(n=1; n=10; n++)
    {
        printf("        1            YES\n");
        printf("                no\n");
    }




    return 0;
}


#include<stdio.h>
int main()
{
    int a;
    printf("A:  ");
    scanf("%d",&a);
    if (a>=0)
    {
         if (isPowerOfTwo(a)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    }
}
#include <stdio.h>

int isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int number;

    // Read a positive nonzero number from the console
    printf("Enter a positive nonzero number: ");
    scanf("%d", &number);

    // Check if the number is a power of 2 and output the result
    if (isPowerOfTwo(number)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

