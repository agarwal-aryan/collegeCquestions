#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, e = 0, o = 0;
    printf("Enter Number");
    scanf("%d", &a);
    while (a != 0)
    {
        b = a % 10;
        if (b % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
        a=a/10;
    }
    printf("No of Odd Digits =%d\n", o);
    printf("No of Even Digits =%d\n", e);
    getch();
}
