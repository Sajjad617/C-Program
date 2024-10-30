//ইউজার পজিটিভ নাম্বার ইনপুট দিলে তা স্ক্রিনে প্রদর্শন করানোর জন্য প্রোগ্রাম।
//ইউজার নেগেটিভ নাম্বার ইনপুট দিলে স্ক্রিনে প্রদর্শিত হবে না।

#include <stdio.h>
int main()
{
    int testNumber;

    printf("Enter an unsigned integer: ");
    scanf("%d", &testNumber);

    //testNumber এর ভ্যালু যদি 0 থেকে বড় হয় তাহলে Test এক্সপ্রেশন True হবে।
    if (testNumber > 0)
    {
        printf("You have entered %d.\n",testNumber);
    }

    printf("The if statement is easy in C programming.");

    return 0;
}


