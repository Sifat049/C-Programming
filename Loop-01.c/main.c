//01
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    i=1;
    printf("Enter Number :  ");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("%d",i);
        if(i<num){
            printf(", ");
        }
        i++;
    }
    return 0;
}
