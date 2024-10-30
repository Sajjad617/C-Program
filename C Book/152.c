#include <stdio.h>
int main()
{
    int score;
    printf("\n\a Enter you score:");
    scanf("%d", &score);

    if      ((score >= 80) && (score <=100))
        printf("\n\aYour grade is A+.");
    else if ((score >= 70) && (score <= 79))
        printf("\n\aYour grade is A.");
    else if ((score >= 60) && (score <= 69))
        printf("\n\aYour grade is A-");
    else if ((score >= 50) && (score <= 59))
        printf("\n\aYour grade is B");
    else if ((score >= 40) && (score <= 49))
        printf("\n\aYour grade is C");
    else if ((score >= 33) && (score <= 39))
        printf("\n\aYour grade is D");
        else
        ("\nYour grade is F");



    return 0;

}
