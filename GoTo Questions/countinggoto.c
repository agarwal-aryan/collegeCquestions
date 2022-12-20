#include <stdio.h>
#include <conio.h>
void main()
{
    int i, mul = 1;
    printf("Enter number of which factorial is to be printed =");
    scanf("%d", &i);
print:
    mul = mul * i;
    i--;
    if (i != 1)
        goto print;
    printf("%d", mul);
    getch();
}
