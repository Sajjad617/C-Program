#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);

    switch ( ch )
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':

        printf("Your choice is vowel.");
        break;

        default:
            printf("Your choice is consonant.");

    }
        return 0;

}
