#include <stdio.h>

#define NEWLINE '\n'
#define LENGTH 5
#define WIDTH  4
int main() {

   int area;

   area = LENGTH * WIDTH;
   printf("Total area : %d", area);
   printf("%c", NEWLINE);

   return 0;
}
