#include <stdio.h>
int factorial(int n)
{
    if(n<=1)
        return 1;
    else
        return (n * factorial(n-1));
}
int main()
{
    int x;
    printf("The number of factorial finding: ");
    scanf("%d", &x);
    int total;
    total = factorial(x);

    printf("%d factorial value = %d", x, total);


}
