#include<stdio.h>
 int main ()
 {
     int x,a,b;
     x=10, a=5, b=15;
     printf("   --x     --b     --c\n");
     printf("_________________________\n");

     while(--a, --b, --x)
        printf("%5d %5d %5d\n", x,a,b);

return 0;
}
