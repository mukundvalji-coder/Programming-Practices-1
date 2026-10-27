
#include <stdio.h>
#include <conio.h>

void main()
{
    float l, b, area;
    clrscr();

    printf("Enter Length: ");
    scanf("%f", &l);

    printf("Enter Breadth: ");
    scanf("%f", &b);

    area = l * b;

    printf("Area of Rectangle = %.2f", area);

    getch();
}
