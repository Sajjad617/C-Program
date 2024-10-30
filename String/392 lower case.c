#include<stdio.h>
#include<string.h>
int main(void)
{
    char ch[50];
    printf("Enter your string: ");
    gets(ch);

    printf("\n\nMaking Uppercase of your string...");

    strlwr (ch);

    printf("\n\nUppercase of your string:\t");
    puts(ch);

    getch();

}

