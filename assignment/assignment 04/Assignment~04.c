//04.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the three angles Value:  ");

    scanf("%d %d %d",&a,&b,&c);

    if (a>0 && b>0 && c>0 && a<180 && b<180 && c<180)  //logical operator   // (angle value should be such that, 0 < value < 180)
    {
        if (a+b+c==180)         //A triangle is valid if the sum of all the three angles is equal to 180 degrees.
        {
            printf("YES");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}
