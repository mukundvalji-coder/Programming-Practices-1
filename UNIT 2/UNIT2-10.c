
#include <stdio.h>
#include <conio.h>

void main()
{
    int qty;
    float price, dis, total, amount;
    clrscr();

    printf("Enter Quantity: ");
    scanf("%d", &qty);

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("Enter Discount Percentage: ");
    scanf("%f", &dis);

    total = qty * price;
    amount = total - (total * dis / 100);

    printf("Total Amount = %.2f", total);
    printf("\nFinal Amount = %.2f", amount);

    getch();
}
