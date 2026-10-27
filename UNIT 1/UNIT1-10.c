#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n, digit, sum=0;

    clrscr();
    printf("Enter number: ");
    scanf("%d", &n);

    n = abs(n);

    while(n>0)
    {
        digit = n%10;
        sum = sum+digit;
        n = n/10;
    }

    printf("Sum of Digits = %d", sum);

    getch();
}
