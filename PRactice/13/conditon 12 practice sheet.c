/*#include <stdio.h>
#include <stdlib.h>
/*-5     10.5
4
1	Quotient: 0

*/
int main()
{
    printf("Hello world!\n");
    float a,b;
    int choice,case1;
    printf("enter two number:");
    scanf("%f%f",&a,&b);
    printf("choice:");
    scanf("%d",&choice);

    if(choice==1)
        printf("Addition: %d",(int)(a+b));
    else if(choice==2)
        printf("Substraction: %d",(int)(a-b));
    else  if(choice==3)
    {
        if(b!=0)
        {
            printf("Quotient: %d",(int)(a/b));

        }
}
        return 0;

}
/*
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
                printf("mul=%lf",a/b);
            }



 #include <stdio.h>
    int main(){
        float a,b;
        int choice;
        scanf("%f%f%d",&a,&b,&choice);
        switch(choice){
        case 1: printf("Addition: %d",(int)(a+b));
            break;
        case 2: printf("Substraction: %d",(int)(a-b));
            break;
        case 3: printf("Multiplication: %d",(int)(a*b));
            break;
        case 4: printf("Quotient: %d",(int)(a/b));
            break;
        }
    }*/
