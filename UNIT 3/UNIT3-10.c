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
        ch = ch + 32;
        printf("Small Letter = %c", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("Capital Letter = %c", ch);
    }
    else
    {
        printf("Not an Alphabet");
    }

    getch();
}
