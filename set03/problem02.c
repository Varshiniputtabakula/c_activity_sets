#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("enter the values of x1 and y1");
    scanf("%f%f",x1,y1);
    printf("enter the values of x2 and y2");
    scanf("%f%f",x2,y2);
    printf("enter the values of x3 and y3");
    scanf("%f%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float distance1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    float distance2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    float distance3=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));

    if(distance1>=distance2+distance3 || distance2>=distance1+distance3 || distance3>=distance1+distance2)
    {
        return 1 ;
    }
    else{
        return -1; 
    }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    
    if(result>0)
    {
       printf("the given points (%f%f),(%f%f),(%f%f) dont form a triangle",x1,y1,x2,y2,x3,y3);
    }

    else 
    {
        printf("the given points (%f%f),(%f%f),(%f%f) form a triangle",x1,y1,x2,y2,x3,y3);
    }

}

int main()
{   
    float x1,y1,x2,y2,x3,y3;
    int result; 
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}
