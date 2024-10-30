#include <stdio.h>
#include <string.h>
int main()
{
    char str1[40], str2[40];
    int x;

    printf("Enter First String: ");
    gets(str1);
    printf("Enter second String: ");
    gets(str2);

    x = strcmp(str1, str2);

    if(0!=x)
        printf("\n\nTwo String are not equal ");
    else
        printf("\n\nTwo string are equal");

    getch();
}
