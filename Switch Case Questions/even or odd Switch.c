#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    switch (a%2==0)
    {
    case 1:
        printf("Even number\n");
        break;
    
    default:
        printf("Odd Number");
        break;
    }
    getch();
}
