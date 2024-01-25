#include<stdio.h>
void input(int *a,int *b)
{
    int x;
    printf("enter the value of x");
    scanf("%d",x);
}

void add(int a,int b,int *sum)
{
    int a,b,*sum;
    *sum=a+b;
    
}

void output(int a,int b,int sum)
{
    printf("the usm of %d and %d is %d",a,b,sum);
}

int main()
{
    int a,b,sum;
    input(&a,&b);
    add(a,b,&sum);
    output(a,b,sum);
}