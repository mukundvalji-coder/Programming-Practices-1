
#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nAddition = %d", a + b);
    printf("\nSubtraction = %d", a - b);
    printf("\nMultiplication = %d", a * b);

    if(b != 0)
    {
        printf("\nDivision = %.2f", (float)a / b);
        printf("\nModulus = %d", a % b);
    }
    else
    {
        printf("\nDivision not possible");
        printf("\nModulus not possible");
    }

    getch();
}
