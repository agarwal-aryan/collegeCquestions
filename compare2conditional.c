#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter 2 numbers to compare");
    scanf("%d%d", &a, &b);
    c = (a > b) ? printf("%d is greater than %d", a, b) : printf("%d is greater than %d", b, a);
    getch();
}
