#include <stdio.h>
int main()
{
   int a ;
   int b ;
   int c ;
   printf("Enter three numbers\n");
   scanf("%d %d %d",&a,&b,&c);
   if(a>b && a>c)

       printf("a = %d is greatest\n",a);

   else if(b>a && b>c)

       printf("b = %d is greatest\n",b);

   else if(c>a && c>b)

       printf("c = %d is greatest\n",c);

   else
        printf("A, B, C is not  greatest\n");

   return 0;
}
