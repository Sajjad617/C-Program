#include <stdio.h>
#include <conio.h>
void main ()
{
        int pstv_range = 32767;
        int ngtv_range = -32768;

        printf("\n %d +1 is %d.\n", pstv_range, pstv_range + 1);
        printf("\n -%d -1 is %d.\n", ngtv_range, ngtv_range - 1);

        getch ();
}
