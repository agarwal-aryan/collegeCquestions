#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, i = 2;
    printf("Enter a Number");
    scanf("%d", &a);
    while (i < a)
    {
        if (a % i == 0)
        {
            b = 1;
            break;
        }
        else
        {
            b = 0;
        }
        i++;
    }
    if (b == 1)
    {
        printf("Not Prime Number\n");
    }
    else
    {
        printf("Prime Number\n");
    }
    getch();
}
