#include <stdio.h>
int main()
{
   long int n, sum, range;

   printf("How many number do you want to calculate:");
   scanf("%ld", &range);

   sum=0;
   for (n=1; n<=range; n++)
        sum+=n;
   printf("\n Sum of all numbers from 1 to %ld is %ld", range, sum);
   return 0;
}
