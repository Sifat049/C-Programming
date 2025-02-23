#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf
    printf("Hello world!\n");
    int num4;
    num4=10;
    printf("num4=%d",num4);

    //scanf

    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("the number:%d\n",num);
    int num3,num2;
    printf("enter two number:");
    scanf("%d %d %d",&num3,&num2,&num);
    printf("three number are:%d %d %d\n",num3,num2,num);

    return 0;
}
