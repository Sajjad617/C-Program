#include<stdio.h>
#include<string.h>
int main(void)
{
    char ch[50];

    printf("Enter your string: ");
    gets(ch);
    strrev(ch);

    printf("\nReverse: %s\n\n", ch);



    getch();
}
