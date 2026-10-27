#include <stdio.h>
#include <conio.h>

void main()
{
    int roll, m1, m2, m3, m4, m5, total;
    float per;
    clrscr();

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Marks of 5 Subjects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    per = total / 5.0;

    printf("\nRoll Number = %d", roll);
    printf("\nTotal = %d", total);
    printf("\nPercentage = %.2f", per);

    if(m1 < 35 || m2 < 35 || m3 < 35 ||
       m4 < 35 || m5 < 35)
    {
        printf("\nResult = Fail");
        printf("\nGrade = F");
    }
    else
    {
        printf("\nResult = Pass");

        if(per >= 80)
            printf("\nGrade = A");
        else if(per >= 60)
            printf("\nGrade = B");
        else if(per >= 50)
            printf("\nGrade = C");
        else if(per >= 35)
            printf("\nGrade = D");
    }

    getch();
}
