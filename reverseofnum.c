#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, s = 0;
    printf("Enter the Number to Reverse");
    scanf("%d", &a);
    while (a != 0)
    {
        b = a % 10;
        printf("%d",b);
        // s = s * 10 + b;
        a = a / 10;
    }
    // printf("Reverse of number is %d", s);
    getch();
}
