// to compare 3 numbers using switch
#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y, z;
    printf("Enter Three Number");
    scanf("%d%d%d", &x, &y, &z);
    switch (x > y)
    {
    case 1:
        switch (x > z)
        {
        case 1:
            printf("%d is Greatest", x);
            break;

        case 0:
            printf("%d is Greatest", z);
            break;
        }
        break;
    case 0:
        switch (y > z)
        {
        case 1:
            printf("%d is Greatest", y);
            break;

        case 0:
            printf("%d is Greatest", z);
            break;
        }
        break;
    }
    getch();
}
