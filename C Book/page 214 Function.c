#include <stdio.h>
int abs_val (int val)
{
    return ( -val );
}
    int main (void)
    {
        int val, get;
        printf("\nEnter Value:");
        scanf("%d", &val);

        get = abs_val(val);
        printf("Absolute value of %d is %d",  val, get);
    return 0;
    }
