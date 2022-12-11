#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, d, e, sum, per;
    printf("Enter Numbers in 5 subjects");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    sum = a + b + c + d + e;
    per = sum / 5;
    printf("Percentage is %d \n", per);
    switch (per >= 60)
    {
    case 1:
        printf("First Division\n");
        break;
    case 0:
        switch (per < 60 && per >= 45)
        {
        case 1:
            printf("second division\n");
            break;
        case 0:
            switch (per < 45 && per >= 33)
            {
            case 1:
                printf("third division\n");
                break;
            default:
                printf("Fail");
                break;
            }
        }
    }
    getch();
}
