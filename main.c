#include <stdio.h>
#include <stdlib.h>

int sum(int num1,int num2);
int sub(int num1,int num2);
int mul(int num1,int num2);
int divi(int num1,int num2);
int main()
{
     int i;
     for(;i!=0;)
     {
    int num1,num2;
    printf("Enter num1=");
    scanf("%d",&num1);
    printf("Enter num2=");
    scanf("%d",&num2);
    int number;
    printf("Select which operation you want\n 1=Addition\n 2=Subtraction\n 3=Multiplication\n 4=Division");
    printf("\n Enter number=");
    scanf("%d",&number);
    switch(number)
    {
    case 1:
        printf("sum=%d\n",sum(num1,num2));
        break;
    case 2:
        printf("Subtraction=%d\n",sub(num1,num2));
        break;

    case 3:
        printf("Multiplication=%d\n",mul(num1,num2));
        break;
    case 4:
        printf("Division=%d\n",divi(num1,num2));
        break;
    }
    printf("continue press 1\n discontinue=0\n");
    printf("i=%d");
    scanf("%d",&i);
    }
    return 0;
}
int sum(int x,int y)
{
    int add=x+y;
    return add;
}
int sub(int x,int y)
{
    int s=x-y;
    return s;
}
int mul(int x,int y)
{
    int p=x*y;
    return p;
}
int divi(int x,int y)
{
    int q=x/y;
    return q;
}
