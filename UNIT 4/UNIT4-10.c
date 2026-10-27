#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    clrscr();
    for(i=1;i<=10;i++)
    {
        printf("Enter Number: ");
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("Total = %d",sum);
    getch();
}
