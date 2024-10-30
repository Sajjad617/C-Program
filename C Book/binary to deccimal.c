#include<stdio.h>
#include<math.h>
int main ()
{
    long int dec, bin, rem, i;
    printf("Enter your binary number= ");
    scanf("%d", &bin);
    while(bin!=0)
    {
        rem = bin%10;
        dec = dec/10;
        bin = dec + rem*pow(2, i);
        i++;
    }
    printf("decimal number= %d", dec);
    return 0;
}
