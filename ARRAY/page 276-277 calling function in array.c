#include<stdio.h>
void func_x(int array[])
{
    int n;
    for (n=0; n<5; n++)
        printf("\noriginal value off all element: %d", array[n]);
        array[2]=300;
}
int main()
{
    int niton[5] = {10, 20, 30, 40, 50};
    printf("Before calling function niton[2]=%d\n", niton[2]);
    func_x(niton);
    printf("\nAfter calling function niton[2]= %d", niton[2]);
}
