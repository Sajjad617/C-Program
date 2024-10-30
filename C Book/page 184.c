#include<stdio.h>
 int main ()
 {
     int counter;
     printf("Even number\n");
     for(counter=1; counter<=50; counter++)
     {
         if (counter%2)
            continue;
         printf("%d\n", counter);
     }

     printf("\n\n\n Odd number");
     counter=0;
     while(counter<50)
     {
         counter++;
         if (!(counter%2))
            continue;
         printf("%d\n", counter);
     }
return 0;
}
