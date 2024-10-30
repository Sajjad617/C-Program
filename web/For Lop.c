// প্রথম n সংখ্যক স্বাভাবিক সংখ্যার যোগফল নির্ণয়ের প্রোগ্রাম।
// ধনাত্মক পূর্ণ সংখ্যা 1,2,3...n স্বাভাবিক সংখ্যা হিসাবে পরিচিত।

#include <stdio.h>
int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    //num এর মান(value) count এর চেয়ে ছোট হলে for লুপের সমাপ্তি ঘটে
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d", sum);

    return 0;
}
