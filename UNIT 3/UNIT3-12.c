#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    clrscr();

    printf("Enter Character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase Character");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase Character");
    }
    else
    {
        printf("Not an Alphabet");
    }

    getch();
}
