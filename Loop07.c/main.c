#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ch;
    int i=1;


 while ('b')
    {
        scanf(" %c",&ch);
        if (ch=='A')
        {
            break;
        }
        printf(" input %d : %c\n ",i,ch);
      i++;
    }
    return 0;
}
