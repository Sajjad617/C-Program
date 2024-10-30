 #include <stdio.h>
#define ROW 3
#define COL 5
int main()
{
    int row, col;
    int array [ROW] [COL] = {{15, 16, 17, 18, 19 },
                                            {35, 36, 37, 38, 39},
                                            {55, 56, 57, 58, 59}
                                            };

    for (row=0; row<ROW; row++)
    {
        for(col=0; col<COL; col++)
    {
           printf("Element [%d] [%d] = %5d\n", row, col, array[row] [col]);
    }

    }
    getch();
    return 0;
}
