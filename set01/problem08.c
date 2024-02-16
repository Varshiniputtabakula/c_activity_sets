#include<stdio.h>
int input_array_size()
{
    int x;
    printf("enter the size of the array");
    scanf("%d",&x);
    return x;
}

void input_array(int x, int a[x])
{ 
    printf("enter the array");
    for(int i=0;i<x;i++)
    {
    scanf("%d",&a[i]);
    }
}
int sum_x_array(int x, int a[x])
{
   int sum=0;
   for(int i=0;i<x;i++)
   {
     sum+=a[i];
   }
  
   return sum;
}

void output(int x,int a[x],int sum)
{
    printf("the sum of %d numbers is ", x);
    for(int i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
       printf("is %d",sum);
    
}

int main()
{   
    int x=input_array_size();
    int a[x];
    input_array(x, a);
    int sum=sum_x_array( x, a);
    output( x,a,sum);
    return 0;

}




