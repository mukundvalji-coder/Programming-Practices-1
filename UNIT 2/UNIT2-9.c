
#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    clrscr();

    printf("Enter two numbers: ");
    scanf("%d"&a,b);

    printf("Before Swap: a=%d b=%d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter Swap: a=%d b=%d", a, b);

    getch();
}
