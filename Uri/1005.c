#include <stdio.h>
int main()
{
    float A, B, AVG;
    scanf("%f%f", &A,&B);
    AVG = ((A * 3.5)+(B * 7.5))/(3.5+7.5);
    printf("MEDIA = %.5f\n",AVG);

    return 0;
}

