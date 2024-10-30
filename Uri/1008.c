#include <stdio.h>
int main()
{
    int a, b;
    double c, sum=0;
    scanf("%d %d %lf",&a, &b, &c);
    sum = b * c;
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2lf\n",sum);
    return 0;
}

