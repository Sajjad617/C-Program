#include <stdio.h>
#include <math.h>
int main()
{
    float num, root;
    printf("Enter a number to find square root: ");

    scanf("%f", &num);
    root = sqrt(num);
    printf("Square root of %.2f = %.2f", num, root);

    getch ();
}
