#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ch;
    printf("Enter any letter:");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'A':  //aivabe lekha jay
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("VOWEL\n");
        break;

        default:
        printf("CONSONANT");
        break;

    case 'a':
        printf("VOWEL\n");
        break;

    case 'e':
        printf("VOWEL\n");
        break;

    case 'i':
        printf("VOWEL\n");
        break;

    case 'o':
        printf("VOWEL\n");
        break;

    case 'u':
        printf("VOWEL\n");
        break;

    }
    return 0;
}
