#include <stdio.h>
#include <conio.h>

void main()
{
    int age;
    clrscr();

    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Person is eligible for vote");
    }
    else
    {
        printf("Person is not eligible for vote");
    }

    getch();
}
