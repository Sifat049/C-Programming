/*Write a program (WAP) that will print following series upto Nth terms.
1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …….
*/
#include <stdio.h>
#include <stdlib.h>
//count=1
int main()
{
    int i,x;
    float num,sum=0,avg=0;
    i=1;
    printf("Enter any number : ");
    scanf("%d",&x);
//printf("1");
    while(i<=x)
    {
        printf("NUmber  %d : ",i);
        scanf("%f",&num);
        sum+=num;
        i=i+1;
    }
    avg=sum/x;
    printf("av : %.2f",avg);

    return 0;
}
