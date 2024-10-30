#include <stdio.h>
void func_X (int array[], int size);
int main()
{
    int rumi[7] = {70, 75, 80, 85, 90, 95, 100};
    int nipu[7] = {10, 20, 30, 40, 50, 60, 70,};
    int ratna[7] = {15, 25, 35, 45, };

    printf("Value of Rumi array\n................................\n");
    func_X(rumi, 7);
    printf("Value of Nipu array\n................................\n");
    func_X(nipu, 5);
    printf("Value of Ratna array\n................................\n");
    func_X(ratna, 6);
}
void func_X (int array[], int size)
{
    int n;
    for(n=0; n<size; n++)
        printf("Array is [%d] is = %d\n", n, array[n]);
}
