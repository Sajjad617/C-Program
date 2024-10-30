#include <stdio.h>
int main()
{
    int a, b, c;

    printf("\nEnter the value:");
    scanf("%d", &a);
    printf("\n Second value:");
    scanf("%d", &b);
    c=a+b;
    printf("Addition of %d and %d is %d", a,b,c);

    return 0;
}
