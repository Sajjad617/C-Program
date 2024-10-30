#include <stdio.h>
int main()
{
    int n, m, sum;
    printf("Enter any number for sum: ");
    scanf("%d", &m);
    sum=0;
    for(n=1; n<=m; n++)
        sum = sum + n;

    printf(" Sum of All number from 1 to %d is = %d", m, sum);

    return 0;

}
