#include<stdio.h>
#include<string.h>

int main(void)
{

char str1[50] = "Bangladesh bogus party";
char str2[50] = "sad is a Beautiful country";

strcpy (str1+11, str2+4);
strcat (str1, "! !! !!!");

printf("\n %s", str1);

getch();
}
