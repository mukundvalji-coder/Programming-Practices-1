#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    clrscr();

    printf("Enter Character: ");
    scanf(" %c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' ||
       ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' ||
       ch == 'O' || ch == 'U')
    {
        printf("Character is Vowel");
    }
    else
    {
        printf("Character is Not Vowel");
    }

    getch();
}
