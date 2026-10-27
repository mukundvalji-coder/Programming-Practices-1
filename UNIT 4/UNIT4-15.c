#include<stdio.h>
#include<conio.h>
void main()
{
    int n,temp,r,sum=0,d=0,p,i;
    clrscr();
    printf("Enter Number: ");
    scanf("%d",&n);
    temp=n;
    if(n<0)
    {
        printf("Not Armstrong Number");
    }
    else
    {
        do
        {
            d++;
            temp=temp/10;
        }while(temp!=0);

        temp=n;
        do
        {
            r=temp%10;
            p=1;
            for(i=1;i<=d;i++)
                p=p*r;
            sum=sum+p;
            temp=temp/10;
        }while(temp!=0);

        if(sum==n)
            printf("Armstrong Number");
        else
            printf("Not Armstrong Number");
    }
    getch();
}
