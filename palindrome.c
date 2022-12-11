#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, s = 0;
    printf("Enter the Number to check Palindrome");
    scanf("%d", &a);
    b = a;
    while (a > 0)
    {
        c = a % 10;
        s = s * 10 + c;
        a = a / 10;
    }
    if (s == b)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }
    getch();
}
