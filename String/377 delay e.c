#include <stdio.h>
#include <dos.h>

int main(void)
{
    char str[24] = "Home Computing group.";

    int n;
    for (n=0; str[n] != '\0'; n++)
    {
        putchar(str[n]);
delay(100);

    }

    return 0;
}
