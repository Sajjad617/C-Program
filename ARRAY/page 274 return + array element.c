#include <stdio.h>
int func_elmnt (int v_1, int v_2);
int main()
{
    int x, niton[5] = {5, 6, 7, 8};
    x= func_elmnt(niton[1], niton[3]);
    printf("niton[1] = %d \nniton[3] = %d\n\t +\n--------------------- \n\t  %d", niton[1], niton[3],  x);
    return 0;
}
int func_elmnt (int v_1, int v_2)
{
    int y;
     y = v_1+v_2;
     return y;
}

