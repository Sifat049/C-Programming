#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    int choice,case1;
    printf("enter two number:");
    scanf("%lf%lf",&a,&b);
    printf("choice:");
    scanf("%d",&choice);

    if(choice==1)
        printf("sum=%.2lf",a+b);
    else if(choice==2)
        printf("sub=%.2lf",a-b);
    else if(choice==3)
        printf("mul=%.2lf",a*b);
    else if(choice==4)
       {

    printf("enter any case:");
    scanf("%d",&case1);
    if(case1==1)
    {
        printf("sum=%lf",a+b);
    }
   else if(case1==2)
    {
        printf("mul=%lf",a%b);
    }
       }


    return 0;
}
