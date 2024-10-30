#include <stdio.h>
int main()
{
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if((score>=90) && (score<=100))
        printf("your grade is: 'A'");
    else if((score>=80) && (score<90))
          printf("your grade is: 'B'");
    else if((score>=70) && (score<80))
        printf("Your grade is: 'C'");
    else
        printf("Your grade is 'F'");
}
