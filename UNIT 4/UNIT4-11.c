#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,i,p=1;
    clrscr();
    printf("Enter X: ");
    scanf("%d",&x);
    printf("Enter Y: ");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        p=p*x;
    }
    printf("Power = %d",p);
    getch();
}
