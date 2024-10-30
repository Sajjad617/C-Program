#include <stdio.h>
void name(int);

int main(void)
{
    int i, n;
    n = name();
  for ( i = 0; i<n; ++i){
     printf("C programming\n");
  }

 // Error: i is not declared at this point
  printf("%d", i);
  return 0;
}
void name(int x){
    int i;
    i=5;


}

