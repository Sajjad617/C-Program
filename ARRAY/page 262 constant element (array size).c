#include <stdio.h>
#define array_size 9
int main()
{
    int array[array_size] = {70, 75, 80, 85, 90, 95, 100, };
    int i;
    for (i=0; i<array_size; i++)
        printf("array[%d] is = %d\n", i, array[i]);
    return 0;
}
