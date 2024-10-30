#include <stdio.h>
void swap(int, int);
int main()
{
    int a,b;
    printf("\nEnter any number: ");
        scanf("%d", &a);
     printf("\nEnter another number: ");
        scanf("%d", &b);

    printf("\nBefore swapping a=%d , b=%d", a, b);

    swap(&a, &b);

    printf("\nAfter swapping a=%d , b=%d", a, b);
return 0;
}
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

}
