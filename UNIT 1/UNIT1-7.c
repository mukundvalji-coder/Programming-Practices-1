#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    clrscr();
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a>=b && a>=c)
    {
        printf("A is largest");
    }
    else if(b>=a && b>=c)
    {
        printf("B is largest");
    }
    else
    {
        printf("C is largest");
    }

    getch();
}
