#include <stdio.h>
#include <conio.h>
void main()
{
    int a, s = 0, i = 1;
    printf("Enter a Number");
    scanf("%d", &a);
    while (i < a)
    {
        if (a % i == 0)
        {
            s = s + i;
        }
        i++;
    }
    if (s == a)
    {
        printf("Perfect Number\n");
    }
    else
    {
        printf("Not Perfect Number\n");
    }
    getch();
}
