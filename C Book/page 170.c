#include<stdio.h>
 int main ()
 {
     int i, n=20;
     float x,y,sum;

     printf("intpur a number (x):");
     scanf("%f", &x);

     x=x*3.1412/180;
     y=1;
     sum=1;
     for(i=1; i< x+1; i++)
     {
         y=y*pow((double)(-1),(double)(2*i-1))*x*x/(2*i*(2*i-1));
         sum=sum+y;
     }
     printf("\n cos(x) = %0.3f", sum);

return 0;
}
