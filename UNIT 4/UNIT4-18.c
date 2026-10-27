#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,temp,r,sum,d,p,j;
    clrscr();
    printf("Enter N: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        temp=i;
        d=0;
        do
        {
            d++;
            temp=temp/10;
        }while(temp!=0);

        temp=i;
        sum=0;
        do
        {
            r=temp%10;
            p=1;
            for(j=1;j<=d;j++)
                p=p*r;
            sum=sum+p;
            temp=temp/10;
        }while(temp!=0);

        if(sum==i)
            printf("%d ",i);
    }
    getch();
}
