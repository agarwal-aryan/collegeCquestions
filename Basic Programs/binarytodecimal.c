#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a, b, s = 0, i = 0;
    printf("Enter a Binary Number for conversion");
    scanf("%d", &a);
    while (a > 0)
    {
        b = a % 10;
        s = s + (b * (pow(2, i)));
        i++;
        a = a / 10;
    }
    printf("Decimal Number is %d", s);
    getch();
}
