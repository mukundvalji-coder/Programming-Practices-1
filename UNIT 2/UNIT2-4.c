
#include <stdio.h>
#include <conio.h>

void main()
{
    float r, area;
    clrscr();

    printf("Enter Radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("Area of Circle = %.2f", area);

    getch();
}
