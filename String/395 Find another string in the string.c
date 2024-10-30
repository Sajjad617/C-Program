#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50], s2[50], pos;

    printf("Enter 1st string: ");
    gets(s1);

    printf("Enter 2nd string: ");
    gets(s2);

    pos = strstr(s1, s2);

    if(pos)
    printf("\n\n%s Found at position %d", s2, pos);
    else
        printf("\n\n%s not Found", s2);
    getch();
}
