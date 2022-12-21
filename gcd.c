#include <stdio.h>
#include <conio.h>
int small(int, int);
void main()
{
    int a, b, i = 1, s, c;
    printf("enter first number and second number");
    scanf("%d%d", &a, &b);
    c = small(a, b);
    while (i < c + 1)
    {
        if (a % i == 0 && b % i == 0)
        {
            s = i;
        }
        i++;
    }
    printf("gcd is %d", s);
//    printf("\nSmallest is %d", c);
}
int small(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
