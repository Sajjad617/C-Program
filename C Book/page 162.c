#include <stdio.h>
int main()
{
   int count;

   printf("First loop\n\a");
   for(count=1; count<=15; count++)
    printf("%d\t", count);

       printf("Second loop\n\a");
   for(count=1; count<=10; count++)
    printf("%d\t", count);

       printf("\nThird loop\n\n\a"); //false loop
   for(count=100; count<=15; count++)
    printf("third %d\n\n", count);

       printf("Fourth loop\n\a");
   for(count=1; count<=10; count++)
    printf("%d\t", count);

   return 0;
}
