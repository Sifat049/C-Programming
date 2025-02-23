#include<stdio.h>
int main()
{
    int a,b,c;
    a=7,b=24,c=5;
    //operators
    int sum=a+b;
    int sub=a-b;
    int multi=b*a;
    float div=(float)b/a;


    //output
    printf("sum:%d\n",sum);
    printf("sub:%d\n",sub);
    printf("multi:%d\n",multi);
    printf("div:%.2f\n",div);

     c %= 7;
     printf("%d", c);

}
