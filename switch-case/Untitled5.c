
#include<stdio.h>
int main()
{
   char x;
    printf("A:  ");
    scanf("%c",&x);


    if ((x>='a' && x<='z') ||   (x>='A' && x<='Z')      )
    {
        printf("%c ALPHAbat\n",x);
    }
    else if(x>='0' && x<='9')
    {
        printf("%c DIGIT\n",x);
    }
    else
    {
        printf("%c  SPECIAL\n",x );
    }


    return 0;
}

