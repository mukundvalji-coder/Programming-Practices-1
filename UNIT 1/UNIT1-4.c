#include <stdio.h>
#include <conio.h>

void main()
{
    float a, b, c, avg;

    printf("Enter three numbers: ");
    scanf("%f", &a, &b, &c);

    avg = (a + b + c) / 3;

    printf("Average = %.2f", avg);

    getch();
}
