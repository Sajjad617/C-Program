#include <stdio.h>
void main(void)
{
   int count, score, total;

   count = total = 0;
   while (count < 5)
   {
       printf("Enter your score: ");
       scanf("%d", &score);

       if((score<0) || (score>80))
        continue;
       total += score;

       printf("\nTotal score is: %d.\n\n", total);
       count++;
   }
   return
    ;
}
