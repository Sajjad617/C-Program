#include <stdio.h>
void main()
{
    int counter;

    printf("First Loop: ");

    for (counter=1; counter<=100; counter++)
        {
            if(counter==50)
                break;
            printf("%d\n", counter);
        }

        printf("\n\n Second loop: ");
        for (counter=100; counter>=1; counter--)
        {
            if(counter==50)
                break;
            printf("%d\n", counter);
                   }
}
