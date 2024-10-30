#include <stdio.h>
int main()
{
    int a[100], i, n;

    printf("How many Number: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }


    int min=a[0];
    for(i=0; i<n; i++)
        {
        if(min > a[i])
            min = a[i];

    }
    printf("Maximun number %d\n", min);
}
