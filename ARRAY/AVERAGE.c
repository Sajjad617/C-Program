#include <stdio.h>
int main()
{
    int grade[5], i, sum=0;
    float average;

    for(i=0; i<5; i++);
    {
        printf("Enter a grade[%5]: ", i+1);
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
    average = (float) (sum) / 5.0;
    printf("\n Average is : %f", average);
    return 0;
}
