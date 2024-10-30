#include<stdio.h>
 int main ()
 {
     char ch;

     printf("\n Press any key without N or n for a noisy sound:");
     ch=getche();
     while((ch!='n') && (ch!='n'))
     {
         putch('\a');
         putch('\a');
         ch=getche();
     }
     printf("\n\n\n Thank you for not hearing a noisy sound.");

return 0;
}
