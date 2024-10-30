#include <stdio.h>
int main()
{
    int year;
    printf("\n\a Please enter a year (like 1975):");
    scanf("%d", &year);

    if (((year%4)==0) && ((year%100)!=0) || ((year%400)==0))
        printf("\n %d is a leap year.", year);
    else
        printf("\n\a %d is not a leap year.", year);

    return 0;

}
