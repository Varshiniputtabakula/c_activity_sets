#include<stdio.h>
typedef struct
{
	float base, altitude, area;

} Triangle;


Triangle input_triangle()
{
	Triangle t;
	printf("enter the base of the triangle");
	scanf("%f",&t.base);
	printf("enter the altitude of the triangle");
	scanf("%f",&t.altitude);
	return t;
}
void find_area(Triangle *t)
{
	t->area=0.5* t->base * t->altitude;
}
void output(Triangle t)
{
      printf("the area of the triangle with base %f and altitude %fis %f",t.base,t.altitude,t.area);
}

int main()
{
	Triangle t;
	t=input_triangle();
	find_area(&t);
	output(t);
    return 0;
}
