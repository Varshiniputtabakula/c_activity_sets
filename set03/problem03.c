#include<stdio.h>
int input_number()
{
int n;
printf("enter the value of n");
scanf("%d",&n);
return n;
}
int is_prime(int n)
{
if(n%1 && n%n)
{
return 1;
}
else{
return -1;
}
}
void output(int n, int result)
{
if(result>0)
{
printf("%d is a prime number",n);
}
else if(result<0){
printf("%d is not a prime number",n);
}
}

int main()
{
int n=input_number();
int result=is_prime(n);
output(n,result);
return 0;
}