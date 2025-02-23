#include <stdio.h>
#include <stdlib.h>
 int a=10;//global variable
int main()
{

   //local variable
    printf("Inside the main function a =%d\n",a);
   display ();
}
void display()
{
      printf("Inside the display function a =%d\n",a);
}
