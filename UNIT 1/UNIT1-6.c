#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, temp;

    clrscr();
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("A = %d\n", a);
    printf("B = %d", b);

    getch();
}
