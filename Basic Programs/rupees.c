#include <stdio.h>
#include <conio.h>
void main()
{
    int a, thou2, hun5, hun2, hun1, fifty, twenty, ten, five, two, one;
    printf("Enter Money");
    scanf("%d", &a);
    while (a > 0)
    {
        thou2 = a / 2000;
        a = a % 2000;
        hun5 = a / 500;
        a = a % 500;
        hun2 = a / 200;
        a = a % 200;
        hun1 = a / 100;
        a = a % 100;
        fifty = a / 50;
        a = a % 50;
        twenty = a / 20;
        a = a % 20;
        ten = a / 10;
        a = a % 10;
        five = a / 5;
        a = a % 5;
        two = a / 2;
        a = a % 2;
        one = a / 1;
        a = a % 1;
    }
    printf("2000 Rupees =%d\n", thou2);
    printf("500 Rupees =%d\n", hun5);
    printf("200 Rupees =%d\n", hun2);
    printf("100 Rupees =%d\n", hun1);
    printf("50 Rupees =%d\n", fifty);
    printf("20 Rupees =%d\n", twenty);
    printf("10 Rupees =%d\n", ten);
    printf("5 Rupees =%d\n", five);
    printf("2 Rupees =%d\n", two);
    printf("1 Rupees =%d\n", one);
    getch();
}
