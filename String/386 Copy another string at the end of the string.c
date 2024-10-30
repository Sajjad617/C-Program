#include<stdio.h>
#include<string.h>
int main()
{
    char country_name[35] = "The International Language is ";
    strcat( country_name, "English");

    printf("International language:\n%s", country_name);

    getch();
}
