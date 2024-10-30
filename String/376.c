#include <stdio.h>
int main (void)
{
    char str[30] = "abcdefghijklmnopqrstuvwxyz";
    int n;

    for(n=0; str[n] !='\0'; n++)
        putchar(str[n]);
}
