#include <stdio.h>
int check(int n);
int main()
{
    int x;
    if (check(x))
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

}
int check(int n)
{

    printf("Enter a number: ");
    scanf("%d", &n);

    return n%2==0;
}
