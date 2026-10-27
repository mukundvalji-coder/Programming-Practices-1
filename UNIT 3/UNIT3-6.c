#include <stdio.h>
#include <conio.h>

void main()
{
    float salary, hra, ta, da, pf, gross;
    clrscr();

    printf("Enter Basic Salary: ");
    scanf("%f", &salary);

    if(salary >= 5000)
    {
        hra = salary * 5 / 100;
        ta = salary * 6 / 100;
        da = salary * 4 / 100;
        pf = salary * 5 / 100;
    }
    else
    {
        hra = salary * 4 / 100;
        ta = salary * 5 / 100;
        da = salary * 3 / 100;
        pf = salary * 4 / 100;
    }

    gross = salary + hra + ta + da - pf;

    printf("\nHRA = %.2f", hra);
    printf("\nTA = %.2f", ta);
    printf("\nDA = %.2f", da);
    printf("\nPF = %.2f", pf);
    printf("\nGross Salary = %.2f", gross);

    getch();
}
