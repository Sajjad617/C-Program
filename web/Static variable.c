#include <stdio.h>
void display();

int main()
{
    display();
    display();
}
void display()
{
    static int count = 0;
    printf("%d\n  ",count);
    count = 10;
}
