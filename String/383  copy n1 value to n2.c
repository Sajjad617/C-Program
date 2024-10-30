#include<stdio.h>
#include<string.h>
int main(void)
{
    char n1[30];
    printf("Enter programming name: \t");
    gets(n1);
    char n2[30];

    strcpy (n2, n1);
    printf("Programmer name is \n\n%s", n2);

    getch();
}
