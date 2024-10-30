#include <stdio.h>
 void call_by_value (int, int, int);
 int main (void)
 {
     int ratna=1, nipu=2, romi=3;

     call_by_value (ratna, nipu, romi);
     printf("\nAfter Function calling: %d %d %d\n", ratna, nipu, romi);
     return 0;

 }
 void call_by_value (int n1, int n2, int n3)
 {
     printf("\n Original value are: %d %d %d", n1, n2, n3);
     n1 +=100;
     n2 +=101;
     n3 +=102;
     printf("\nAfter changing the values: %d %d %d", n1, n2, n3);
 }
