#include <stdio.h>
void display();

int count = 3;  // গ্লোবাল ভ্যারিয়েবল

int main()
{
    //count ভ্যারিয়েবলকে  main() ফাংশনে ডিক্লেয়ার করা হয় নি
    ++count;
    display();
    return 0;
}

void display()
{
    // count ভ্যারিয়েবলকে  display() ফাংশনে ডিক্লেয়ার করা হয় নি
    ++count;
    printf("count = %d", count);
}
a
