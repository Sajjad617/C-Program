#include <stdio.h>
void funcX (int get_array[])
{
    int n;
    for (n=0; n<5; n++)
    printf("\n %d", get_array[n]);
}

int main()
{
    int niton[5] = {80, 85, 90, 95, 100};
    funcX (niton);
    return 0;
}
