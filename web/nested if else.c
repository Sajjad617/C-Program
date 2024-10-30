// =, > অথবা < ব্যবহার করে দুটি ইন্টেজারের মধ্য সম্পর্ক তৈরি

#include <stdio.h>
int main()
{
    int testNumber1,testNumber2;
    printf("Enter two integers: ");
    scanf("%d %d", &testNumber1, &testNumber2);

    //দুটি ইন্টেজার সমান কিনা চেক করে।
    if(testNumber1 ==testNumber2)
    {
        printf("Result: %d = %d",testNumber1, testNumber2);
    }

    //testNumber2 থেকে testNumber1 বড় কিনা চেক করে
    else if (testNumber1 >testNumber2)
    {
        printf("Result: %d > %d",testNumber1, testNumber2);
    }

    // যদি উভয় এক্সপ্রেশন false হয়।
    else
    {
        printf("Result: %d < %d",testNumber1, testNumber2);
    }

    return 0;
}
