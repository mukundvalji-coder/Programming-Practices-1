#include <stdio.h>
#include <conio.h>

void main()
{
    float price, total, discount, payment;
    int qty;
    clrscr();

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &qty);

    total = price * qty;

    if(total > 1000)
    {
        discount = total * 15 / 100;
    }
    else
    {
        discount = total * 10 / 100;
    }

    payment = total - discount;

    printf("\nTotal = %.2f", total);
    printf("\nDiscount = %.2f", discount);
    printf("\nFinal Payment = %.2f", payment);

    getch();
}
