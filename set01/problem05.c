#include<stdio.h>
int input()
{
    int x;
    printf("enter the value of x");
    scanf("%d",x);
    return x;

}

int compare(int a,int b,int c)
{
    int largest;
    if(a>b && a>c)
    {
        largest=a;
        return largest;

    if(b>a && b>c)
    {
        largest=b;
        return largest;
    }
    if(c>a && c>b)
    {
        largest=c;
        return largest;
    }
}

void output(int a,int b,int cint largest)