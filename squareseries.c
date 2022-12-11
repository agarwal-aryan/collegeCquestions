// to print 1,4,9,16,25.......nth terms
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i = 2;
    printf("Enter limit");
    scanf("%d", &n);
    printf("1 ");
    while (i < n + 1)
    {
        printf("%d ", i * i);
        i++;
    }
    getch();
}
