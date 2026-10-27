#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    clrscr();

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(b == 0)
    {
        printf("Division by zero is not allowed");
    }
    else if(a % b == 0)
    {
        printf("Number is Divisible");
    }
    else
    {
        printf("Number is Not Divisible");
    }

    getch();
}
