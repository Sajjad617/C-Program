#include <stdio.h>
void show_val(int);
int main (void)
{
    int i;

    i=10;
    show_val(i);

    i=20;
    show_val(i);

    return 0;
}
void show_val (int x)
{
    printf("%d", x);
}
