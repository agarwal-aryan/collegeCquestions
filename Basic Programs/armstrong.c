#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, s = 0;
    printf("Enter Number To Armstrong");
    scanf("%d", &a);
    b = a;
    while (a > 0)
    {
        c = a % 10;
        s = s + (c * c * c); // or we can use pow function from math library
        a = a / 10;
    }
    if (s == b)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    getch();
}
