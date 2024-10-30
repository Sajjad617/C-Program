#include<stdio.h>
 int main ()
 {
     char ch;
     for(ch='A'; ch<='Z'; ch++){
            if (ch=='L'){
                break;
            }
     printf("%c\n", ch);
     }

return 0;
}
