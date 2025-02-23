/*Program that will take the final score of a student in a
particular subject as input and find his/her grade.

Marks	Letter Grade	     Marks	     Letter Grade	  Marks	           Letter Grade
90-100	         A 	            70-73                C+ 	            Less than 55	           F
86-89	            A- 	            66-69	               C
82-85	            B+ 	           62-65	               C-
78-81	            B 	           58-61	               D+
74-77           	B-             	55-57	               D


Sample input         	Sample output
91.5	                                   Grade: A
50	                                   Grade: F

*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);

    if (marks<=100 && marks>=90)
    {
        printf( "Grade: A");
    }
    else if (marks<=89 && marks>=86)
    {
        printf( "Grade: A-");
    }
    else if (marks<=85 && marks>=82)
    {
        printf( "Grade: B+");
    }
   else  if (marks<=81 && marks>=78)
    {
        printf( "Grade: B");
    }
   else  if (marks<=77 && marks>=70)
    {
        printf( "Grade: C");
    }
    else if (marks<55)
    {
        printf("FAIL");
    }
    return 0;
}
