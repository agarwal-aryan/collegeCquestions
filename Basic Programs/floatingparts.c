#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,c;
    int b;
    printf("Enter a float");
    scanf("%f",&a);
    b=a;
    c=fabs(a-b);
    printf("%d\n",b);
    printf("%.2f",c);
getch();
}
