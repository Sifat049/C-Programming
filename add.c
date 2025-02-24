/*7.		Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’ 
at the keyboard. 
Sample input	           Sample output
X                            Input 1: X
1                            Input 2: 1
a                            Input 3: a
A	                  
*/
#include<stdio.h>
int main ()
{
while (1)

	{char input;
	printf("INPUT : ");
	scanf("%c",input);

	int i=1;
	while(i>=1)
	{
		printf("Input %d : %d",i,input);
		i++;
		if(input=='X' || input=='X');
		break;
	}}
}