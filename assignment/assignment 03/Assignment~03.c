//03.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount,c500,c100,c50,c10,c5,c1;
    printf("The amount of money:    ");
    scanf("%d",&amount);


    c500=amount/500;
    amount=amount%500;
    c100=amount/100;
    amount=amount%100;
    c50=amount/50;
    amount=amount%50;
    c10=amount/10;
    amount=amount%10;
    c5=amount/5;
    amount=amount%5;
    c1=amount/1;
    amount=amount%1;


    printf(" %d note(s) of 500\n",c500);
    printf(" %d note(s) of 100\n",c100);
    printf(" %d note(s) of 50\n",c50);
    printf(" %d note(s) of 10\n",c10);
    printf(" %d note(s) of 5\n",c5);
    printf(" %d note(s) of 1\n",c1);
    return 0;
}
