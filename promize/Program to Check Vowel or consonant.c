#include <stdio.h>
int main()
{
    char ch;
    int lower_case, upper_case;

    printf("Enter a character: ");
    scanf("%c", &ch);

    lower_case = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    upper_case = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if(lower_case || upper_case)
        printf("%c is vowel", ch);
    else
        printf("%c is consonant", ch);

    return 0;

}
