#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int X,n1,n2,n3;
    //player-1 picks
    printf("picks number:  ");
    scanf("%d",&X);
    printf("picks number 1:  ");
    scanf("%d",&n1);
//int i=1;

//while (i<5)
   {

 if(n1==X)
    {
       printf("Right, Player-2 wins!\n");

    }
    else
    {
       printf("Wrong, 2 Chance(s) Left!\n");
    }
    printf("picks number 2:  ");
    scanf("%d",&n2);
    if(n2==X)
    {
               printf("Right, Player-2 wins!\n");

    }
    else
    {
        printf("Wrong , 1 chance lefts!\n");
    }
    printf("picks number 3:  ");
    scanf("%d",&n3);
    if(n3==X)
    {
   printf("Right, Player-2 wins!\n");

    }
    else
    {
        printf("Player-1 wins!\n");
    }
    //i++;
       }
    return 0;
}
