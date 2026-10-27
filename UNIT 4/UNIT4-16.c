#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,flag=0;
    clrscr();
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(n>1 && flag==0)
        printf("Prime Number");
    else
        printf("Not Prime Number");
    getch();
}
