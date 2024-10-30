#include <stdio.h>
void print_sms(void)
{
    printf("\nSum of all the numbers from 1 to your given numbers:");
}
void added_all( int value)
{
    int n;
    int sum;
    for(n=0; n<=value; n++)
    sum +=n;
    printf("\nSum of all numbers from 1 to %d is %d", value, sum);
}
int main()
{
    print_sms();

    added_all(10);

}
