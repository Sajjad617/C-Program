#include <stdio.h>
#include <string.h>
int main()
{

char get_out_ch[30];
printf("Enter String: ");
gets(get_out_ch);
int length;

length = strlen(get_out_ch);

printf("\nString: %s\n", get_out_ch);
printf("This string contains is :%d", length);

getch();
return 0;
}
