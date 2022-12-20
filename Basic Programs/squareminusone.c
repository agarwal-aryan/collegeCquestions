// to print 1,3,8,15......nth term
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
        printf("%d ", ((i * i) - 1));
        i++;
    }
    getch();
}
