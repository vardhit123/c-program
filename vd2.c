#include<stdio.h>
struct triangle
{
float b,h,area;
}t;
int main()
{
printf("enter the base\n");
scanf("%f",&t.b);
printf("enter the height\n");
scanf("%f",&t.h);
t.area=0.5*t.b*t.h;
printf("area of the triangle is %f",t.area);
return 0;
}
