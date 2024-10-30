#include <stdio.h>
void ShowVal(int);
int main()
{
    int i;
    i = 10;
    ShowVal(i);
    i=20;
    ShowVal(i);
    getch();
    return 0;
}
void ShowVal (int x)
{
    printf("%d", x);
}
