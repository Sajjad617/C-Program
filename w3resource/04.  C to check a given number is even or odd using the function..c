#include <stdio.h>
int checkoddEven(int n)
{
    return n%2==0;
}
int  main()
{
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);

    if (checkoddEven(x))
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is Odd");
    }
}
