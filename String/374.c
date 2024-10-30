#include <stdio.h>
int main(void)
{
    char ctrl_char[] = "%s\n";
    char func_argu[] = "Welcome to the world of C Programming";

    printf( ctrl_char, func_argu);
    printf( "%s\n", func_argu);
    printf( func_argu );
    printf( ctrl_char );

    return 0;
}
