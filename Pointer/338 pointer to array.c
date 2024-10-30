#include <stdio.h>
int main(void)
{
    int n, score[5];

    *(score+0) = 10;

    *(score+1) = 20;

    *(score+2) = 30;

    *(score+3) = 40;

    *(score+4) = 50;

    for(n=0; n < 5; n++)
    printf("Score of student no: [#%d] is %d.\n", n, *(score+n));

}
