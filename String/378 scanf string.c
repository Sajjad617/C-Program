#include <stdio.h>
int main(void)
{
    char name[30];

    int age;

    printf("\nWhat is your name: ");
    scanf("%s", name);

    printf("\nHow old are you: ");
    scanf("%d", &age);

    if(age<=10)
        printf("Sorry! %s, age can't be zero or negative.\n",  name, age);
    else
        printf("\nHey %s, Next year you will be % d years old", name, age);
}
