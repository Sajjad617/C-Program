//রিকার্সন ব্যবহার করে স্বাভাবিক সংখ্যা যোগের জন্য প্রোগ্রাম
#include <stdio.h>
int sum(int num);

int main()
{
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum=%d", result);
}

int sum(int num)
{
    if (num!=0)
        // sum() ফাংশন নিজেই নিজেকে কল করে
        return num + sum(num-1);
    else
        return num;
}
