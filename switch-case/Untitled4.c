
#include<stdio.h>
int main()
{
    int x;
    printf("A:  ");
    scanf("%d",&x);
    int a=x & (x-1);

    if (a==0  && x!=0 )
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }


    return 0;
}
