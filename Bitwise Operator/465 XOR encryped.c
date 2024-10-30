#include<stdio.h>

void en_pas(char *);

int main()
{
    char pass[10];

    printf("Enter your Password: ");
    gets(pass);

    en_pas(pass);

    printf("The encrypted version of your pass is: ");
    puts(pass);

    getch();
}

void en_pas (char *pass)
{
    while(*pass != '\0')
    {
        *pass++ ^= 10;
    }
}
