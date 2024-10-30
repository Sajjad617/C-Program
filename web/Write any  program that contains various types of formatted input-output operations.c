#include <stdio.h>

int main()
{
    int num1, num2, value;
    printf("Enter a 1st input: ");
    scanf("%d", &num1);
    printf("Enter a 2nd input: ");
    scanf("%d", &num2);

    value = num1+num2;
    printf("The sum of two numbers = %d\n", value);

    value = num1-num2;
    printf("Subtraction of two numbers = %d\n", value);

    value = num1*num2;
    printf("Multiplication of two numbers = %d\n", value);

    value = num1/num2;
    printf("Divisions of two numbers = %d\n", value);

    return 0;
}
Write any c program that contains various types of formartted input output operations
