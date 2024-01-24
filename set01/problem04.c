#include<stdio.h>
int input(int *a,int *b)
{
    int x;
    printf("enter the value of x");
    scanf("%d",&x);
    return x;
}

void add(int a,int b,int *sum)
{
    int a,b,*sum;
    *sum=a+b;
    return *sum;
}

void output(int a,int b,int sum)
{
    printf("the usm of %d and %d is %d",a,b,sum);
}

int main()
{
    int a,b,sum;
    a=input();
    b=input();
    add(a,b,&sum);
    output(a,b,sum);
}