int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

#include<stdio.h>
int input_n()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    return n;
}

int sum_n_nos(int n)
{
    
    int i,sum;
    for(i=0;i<=n;i++)
    {
       sum=sum+i;
    }
    return sum;
}

void output(int n , int sum)
{
    printf("the sum is %d",sum);
}

int main()
{
    
}
