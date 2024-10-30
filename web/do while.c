// ইউজার 0(শূন্য) প্রবেশ না করানো পর্যন্ত যোগফল নির্ণয়ের প্রোগ্রাম

#include <stdio.h>
int main()
{
    double number, sum = 0;

    //লুপের বডি কমপক্ষে একবার এক্সিকিউট হয়।
    do
    {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
    }
    while(number != 0.0);

    printf("Sum = %.2lf",sum);

    return 0;
}
