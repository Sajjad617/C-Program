#include <stdio.h>

int multiplyNumbers(int a, int b);   // ফাংশন প্রোটোটাইপ

int main()
{
    int num1,num2,multiplication;

    printf("Enters two numbers: ");
    scanf("%d %d",&num1,&num2);

    multiplication = multiplyNumbers(num1,num2);   //ফাংশন কল

    printf("multiplication = %d",multiplication);

    return 0;
}


int multiplyNumbers(int a,int b)    //ফাংশন ডেফিনিশন
{
    int result;
    result = a*b;
    return result;            // return স্টেটমেন্ট
}

