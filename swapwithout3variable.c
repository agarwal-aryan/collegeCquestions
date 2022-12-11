#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("the first number before swap %d \n",a);
    printf("the second number before swap %d \n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the first number after swap %d \n",a);
    printf("the second number after swap %d \n",b);
}
