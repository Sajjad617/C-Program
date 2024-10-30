//সর্বোচ্চ  ৫টি সংখ্যাকে যোগ করার জন্য প্রোগ্রাম
//ইউজার ধনাত্মক সংখ্যা প্রবেশ করানো পর্যন্ত যোগফল নির্ণয় হতে থাকে।

# include <stdio.h>
int main()
{
    int i;
    double number, sum = 0.0;
    i=1;

    while (i<= 5)
    {
        printf("Enter a number%d: ",i++);
        scanf("%lf",&number);

        if(number < 0.0)


        sum += number;
    }

    printf("Sum = %.2lf",sum);

    return 0;
}

