#include <stdio.h>
void print_sms(void)
{
    printf("\nThis is print_sms() is Function." );
}
int square_value (int value)
{
    return (value* value);
}
int main (void)
{
    int num, square;
    printf("Enter a number: ");
    scanf("%d", &num);
    square = square_value(num);
    printf("\nSquare value %d is %d", num, square);
    print_sms();
            getch();
}
