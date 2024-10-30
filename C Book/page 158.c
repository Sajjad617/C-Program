#include <stdio.h>
int main()
{
   int xyz;
   printf("Enter 1 or 2 or 3 or 4 or 5:\n");
   scanf("%d",&xyz);
   switch (xyz)
   {
        case 1:
                printf("\n Have a Good Morning");
                break;
        case 2:
                printf("\n Have a Good Evening");
                break;
        case 3: case 4: case 5:
                printf("\n Have a Nice Day");
                break;
        default :
                printf("\nNo wise for you");
                break;

   }
   return 0;
}
