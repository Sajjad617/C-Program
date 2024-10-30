#include <stdio.h>
int main()
{
    int grade[5], i, sum=0;
    float average;
    for (i=0; i<5; i++)
        {
            printf("Enter grade[%d]: ", i+1);
            scanf("%d", &grade[i]);
            sum += grade[i];
            }
            average = (float)  (sum) / 5.0;
            printf("Average is %.2f", average);
            getch();
            return 0;
}
