#include<stdio.h>
int main()
{
    int a[2] [2] = {5, 4, 4, 4};
    int b[2] [2] = {6, 7, 4, 8};
    int i, j;
    printf("Matrix A is: \n");

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n\n");
    }

    printf("Matrix B is: \n");
        for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                printf("\t%d", b[i] [j]);
            }
            printf("\n\n");
        }



}

