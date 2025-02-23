#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Choice;
    float Temp,ConvertedTemp;
    printf("Temperature based Conversation\n");
    printf("1. Farenheigt to Celcious\n");
    printf("2. Celcious to Farenheigt \n");
    printf("Enter your Choice:   ");
    scanf("%d",&Choice);

switch(Choice)
{
case 1:
    {
        printf("Enter the Farenheigt Temperature:   ");
        scanf("%f",&Temp);
        ConvertedTemp = (Temp - 32)/1.8;
        printf("The temperature in Celcious is:%f degree C\n",ConvertedTemp);
    }
   case 2:
    {
        printf("Enter the Celcious Temperature :   ");
        scanf("%f  ",&Temp);
        ConvertedTemp = (Temp *1.8)+32;
        printf("The temperature in Farenheigt is:%f degree F\n",ConvertedTemp);
    }
   default :
    {
        printf(" \"Not a Correct Option\"");
    }
}







    return 0;
}
