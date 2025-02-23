#include <stdio.h>
#include <stdlib.h>

int main()
{


    int n;
       printf("enter any nmber:");
       scanf("%d",&n);
      int x=(n&n-1);
       if(x==0)
        printf(" power of 2");
       else
        printf("%d not power of 2",x);
    return 0;
}
