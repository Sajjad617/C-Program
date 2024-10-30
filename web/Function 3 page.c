#include <stdio.h>
int checkPrimeNumber(int n);

int main()
{
    int n, flag;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    /* checkPrimeNumber() ফাংশনের মধ্য দিয়ে n কে অতিক্রম করানো হয়।
     ফাংশন থেকে রিটার্নকৃত ভ্যালু flag ভ্যারিয়েবলে জমা হয়*/
    flag = checkPrimeNumber(n);

    if(flag==1)
        printf("%d is not a prime number",n);
    else
        printf("%d is a prime number",n);

    return 0;
}

// এই ফাংশন থেকে integer রিটার্ন হয়।
int checkPrimeNumber(int n)
{
    /*checkPrimeNumber() ফাংশন থেকে পূর্ণ সংখ্যা(Integer number) রিটার্ন হয় */
    int i;

    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0)
            return 1;
    }

    return 0;
}
