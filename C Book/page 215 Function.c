#include <stdio.h>
int ret_befo (int val)
{
    printf("Statement in ret_befo() Function before return.");

    return (val*val);
    printf("Statement in ret_befo() Function After return.");
}

int main (void)
{
    int val, get;
    printf("Enter a value: ");
    scanf("%d", &val);
    get = ret_befo(val);
    printf("Square of %d is %d", val, get);

    return 0;
}
