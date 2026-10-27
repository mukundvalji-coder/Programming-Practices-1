#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    unsigned long fact=1;
    clrscr();
    printf("Enter Number: ");
    scanf("%d",&n);
    if(n<0 || n>12)
        printf("Enter number from 0 to 12");
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("Factorial = %lu",fact);
    }
    getch();
}
