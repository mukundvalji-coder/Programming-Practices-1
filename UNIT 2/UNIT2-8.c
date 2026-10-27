
#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, temp;
    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap: a=%d b=%d", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter Swap: a=%d b=%d", a, b);

    getch();
}
