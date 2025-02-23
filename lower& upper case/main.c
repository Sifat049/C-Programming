#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
//LOWER
     char lower1,lower2,lower3,lower4,lower5;
    printf("enter five lower word:");
    scanf("    %c %c %c %c %c",&lower1,&lower2,&lower3,&lower4,&lower5);
    printf("the upper word:%c %c %c %c %c\n",lower1-32,lower2-32,lower3-32,lower4-32,lower5-32);


//UPPER
      char upper1,upper2,upper3,upper4,upper5;
    printf("enter five UPPER word:");
    scanf("    %c %c %c %c %c",&upper1,&upper2,&upper3,&upper4,&upper5);
    printf("the upper word:%c%c%c%c%c\n",upper1+32,upper2+32,upper3+32,upper4+32,upper5+32);


    return 0;
}
