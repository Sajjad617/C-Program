#include <stdio.h>
int  main()
{
    int a[100];
    int i,  sum=0;
    int n;
    printf("How many number: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    for(i=0; i<n; i++)
    sum = sum+a[i];

    printf("Sum of all numbers: %d\n" , sum);

    printf("Average: %.2f", (float) sum/n);


}
