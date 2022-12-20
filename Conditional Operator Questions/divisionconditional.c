#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, d, e, sum, per, div;
    printf("Enter Numbers in 5 subjects");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    sum = a + b + c + d + e;
    per = sum / 5;
    printf("Total is %d",sum);
    printf("Percentage is %d \n", per);
    div = (per >= 60) ? printf("First Division") : ((per < 60 && per >= 45) ? printf("Second Division") : ((per < 45 && per >= 33)) ? printf("Third Division") : (printf("Fail")));
    printf("Divison is %s", div);
    getch();
}
