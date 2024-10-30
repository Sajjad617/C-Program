#include <stdio.h>

void print_message (void)
{
    printf("\n This is print_message() function");
}
int square_value(int value)
{
    print_message();
    return (value*value);
}
int main(void)
{
    int value;
    value = square_value(5);
    printf("\n Square value is %d", value);

    return 0;
}
