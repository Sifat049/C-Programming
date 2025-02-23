#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int x=5;
    printf("unary plus=%d\n",+x);//unary plus= +x

    int y=5;
    printf("unary plus=%d\n ",-y);//unary plus= -y

    //increment operators

    //prefix increment
    int a=10;

    int b=++a;//b=11
    printf("prefix increment=%d\n",a);

    printf("prefix  increment=%d\n",b);

//postfix increment
    int a1=10;

    int b1=a1++;  //b=10
    printf("postfix  increment=%d\n",a1);

    printf("postfix  increment=%d\n",b1);

    //all increment
    int m=10;
    printf("%d\n",m++);   // 10
    printf("%d\n",m);//11
    printf("%d\n",++m);   // 12
    printf("%d\n",m++);  //12
    printf("%d\n",m); //13
    printf("%d\n",--m);//12
    printf("%d\n",m++);  //12
    return 0;
}
