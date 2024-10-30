#include <stdio.h>
int main (void)
{
    float a = 10.375;
    char *ptr;

    ptr = (char * ) &a;

    printf("ptr         *ptr.\n");
    printf("-----       ------\n");
    printf("%x     %02x\n", ptr, *ptr);

    ++ptr;
    printf("%x     %02x\n", ptr, *ptr);

    ++ptr;
    printf("%x     %02x\n", ptr, *ptr);

    ++ptr;
    printf("%x     %x\n", ptr, *ptr);

    return 0;
}

