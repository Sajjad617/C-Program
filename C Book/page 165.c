#include<stdio.h>
 int main ()
 {
     int count;
     for(count=10; count>=1; count--){
            if(count==4){
                break;
            }

        printf("%d\n", count);
     }

return 0;
}
