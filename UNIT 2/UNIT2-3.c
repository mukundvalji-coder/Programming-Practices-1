
#include <stdio.h>
#include <conio.h>

void main()
{
    float p, r, n, si;
    clrscr();

    printf("Enter Principal Amount: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Number of Years: ");
    scanf("%f", &n);

    si = (p * r * n) / 100;

    printf("Simple Interest = %.2f", si);

    getch();
}
