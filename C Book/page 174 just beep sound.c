#include <stdio.h>
void main()
{
    char ch;

    printf("Press any key without N or n for noisy sound: ");
    scanf("%c", &ch);

    while( (ch !='N') && (ch != 'n'))

    {
        putch('\a');
        putch('\b');
        scanf("%c", &ch);
    }

    printf("\n\n\n Thank you for not hearing a noisy sound");

    return 0;
}
