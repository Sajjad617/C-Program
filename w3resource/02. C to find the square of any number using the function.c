#include <stdio.h>
double square(double num)
{
    int mul;
    mul = num*num;
    return mul;
}

int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    double total;
    total= square(x);
    printf(" The Square is %d = %.2f", x, total );
    return 0;

}
