#include <stdio.h>
int main()
{
   char ch ;
   printf("Enter a character:\n");
   ch = getch();
   switch (ch)
   {
   case 'a':
   case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("\n\a Your choice is vowel\n");
    break ;



    default:
    printf("\n\a Your choice is consonant\n");
   }


   return 0;
}
