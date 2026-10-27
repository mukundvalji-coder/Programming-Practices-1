#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    clrscr();

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a == b)
    {
        printf("Numbers are Equal");
    }
    else
    {
        printf("Numbers are Not Equal");
    }

    getch();
}
