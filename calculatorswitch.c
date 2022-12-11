#include <stdio.h>
#include <conio.h>
#include  <stdlib.h>
void main()
{
    int a, b, c, ch;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("Press 1 for ADDITION \n");
    printf("Press 2 for SUBTRACTION \n");
    printf("Press 3 for MULTIPLICATION \n");
    printf("Press 4 for DIVISION \n");
    scanf(" %d", &ch);
    switch (ch)
    {
    case 1:
        c = a + b;
        printf("Sum is %d", c);
        break;
    case 2:
        c = a - b;
        printf("Difference is %d", c);
        break;
    case 3:
        c = a * b;
        printf("Product is %d", c);
        break;
    case 4:
        c = a / b;
        printf("Quotient is %d", c);
        break;
    default:
        printf("Invalid Choice");
        break;
    }
    getch();
}
