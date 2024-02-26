#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("enter the value of x1");
    scanf("%f",x1);
    printf("enter the value of y1");
    scanf("%f",y1);
    printf("enter the value of x2");
    scanf("%f",x2);
    printf("enter the value of y2");
    scanf("%f",y2);

}
float find_distance(float x1, float y1, float x2, float y2)
{
    float distance;
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)

{
    printf("The distance between point (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,distance);
}

int main()
{    
    float x1,y1,x2,y2,distance;
    input(&x1,&y1,&x2,&y2);
    distance=find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;


}