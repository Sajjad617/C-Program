#include<stdio.h>


int main()
{
int i=1;  // লোকাল ভ্যারিয়েবলকে ইনিশিয়ালাইজ করা হয়েছে।


for(i=1; i<=10; i++) // 1 থেকে 10 পর্যন্ত লুপ চলবে
{
if(i==7)       // i এর ভ্যালু 7 এর সমান হলে লুপ চলমান হবে
{
break;
}
printf("%d \n",i);
}   //for লুপের শেষ

return 0;
}
