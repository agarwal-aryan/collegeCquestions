// to compare 2 numbers using switch
#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    switch (a>b)
    {
    case 1:
        printf("%d is greater than %d",a,b);
        break;
    
    case 0:
        printf("%d is greater than %d",b,a);
        break;
    }
    getch();
}
