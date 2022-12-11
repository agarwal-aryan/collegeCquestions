#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, max;
    printf("Enter three numbers to compare");
    scanf("%d%d%d", &a, &b, &c);
    max = (a > b && a > c) ? a : ((b > c) ? b : c);
    printf("%d is Biggest",max);
    getch();
}
