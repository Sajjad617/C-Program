#include<stdio.h>
 int main ()
 {
    int count;
    printf("First loop\n");
    for(count=1; count<=100; count++)
    {
        if (count==50)

            break;
            printf("%d\n", count);
        }
        printf("Second loop");
        for(count=100; count>=1; count--)
        {
            if(count==50)
                break;
            printf("%d\n", count);

    }

return 0;
}
