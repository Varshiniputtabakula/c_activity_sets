//3. Write a C program to add two numbers using **pass by value**

***Function declarations***

c
int input();
int add(int a, int b);
void output(int a, int b, int sum);
```

***Input***

```
1
2
```

***Output***

```
The sum of 1 and 2 is 3
```//

#include<stdio.h>

int input();
int add(int a,int b);
void output(int a,int b,int sum);


int input()
{
    int x;
    printf("enter the value of x");
    scanf("%d",x);
    return x;
}

int add(int a,int b)
{   
    int sum;
    sum=a+b;
    return sum;
}

void output(int a,int b,int sum)
{
    printf("the sum of %d and %d is %d",sum);
}
int main()
{   int a,b,sum,add;
    a=input();
    b=input();
    add=a,b;
    output(a,b,sum);
    return 0;

}
