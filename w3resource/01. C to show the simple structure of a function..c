#include <stdio.h>
int sum(int, int);
int main()
{

int x,y,total;
    total = sum(x,y);
    printf("the total is: %d\n", total);
    return 0;
}
int sum(int a, int b)
{

    printf("Enter any number: ");
    scanf("%d %d", &a, &b);
    int s;
    s=a+b;
    return s;
}
