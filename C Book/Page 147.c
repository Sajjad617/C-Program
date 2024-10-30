#include <stdio.h>
int main()
{
    int n;
    printf("\n\a please enter a integer number:");
    scanf("%d", &n);
    if ((n%2)!=0)
        printf("\n\a You enter the odd number.");
    else
        printf("\n\a You enter the even number.");

    return 0;

}
