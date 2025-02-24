#include<stdio.h>
int main()
{
    int x,i;
    printf("X : ");
    scanf("%d",&x);

    for(i=1; i<=x; i=i+2)
    {
        printf("%d",i);
        if(i<x-1)
        {
            printf(", ");
        }
    }
    return 0;



}
