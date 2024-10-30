#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[50], *str2;

    printf("Enter your string: ");
    gets(str1);

    if((str2  = strdup(str1)))
       printf("Duplicate string:\n\n\t\t %s", str2);
       else
        printf("\nSorry, There is an error occurs");
    getch();
}
