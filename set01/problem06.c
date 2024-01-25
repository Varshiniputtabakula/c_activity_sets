#include<stdio.h>
int input(int *a, int *b, int *c)
{
    int x;
    printf("enter the value of x");
    scanf("%d",x);
    return x;

}

void compare(int a, int b, int c, int *largest)
{
    int largest;
    if(a>b && a>c)
    {
        *largest=a;
    }
    if(b>a && b>c)
    {
        *largest=b;
    }
    if(c>a && c>b)
    {
        *largest=c;
    }
}

void output(int a, int b, int c, int largest)
{
    printf("the largest of %d,%d and %d is %d",a,b,c,largest);
}

int main()
{   
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}
