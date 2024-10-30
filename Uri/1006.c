#include <stdio.h>
int main()
{
    double A, B, C, AVG;
    scanf("%lf %lf %lf", &A,&B,&C);
    A = A*2;
    B = B*3;
    C = C*5;
    AVG = (A+B+C)/(2+3+5);
    printf("MEDIA = %.1lf\n",AVG);

    return 0;
}



