#include <stdio.h>
#include <conio.h>
void main()
{
    int a=1;
    while (a<=10)
    {
        if (a % 2 == 0)
        {
            printf("%d even\n", a);
        }
        else{
            printf("%d odd\n", a);
        }
        a++;
    }
    getch();
}
