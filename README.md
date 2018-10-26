# c-program
#include<stdio.h>
struct triangle {int base,height,area;};
int main()
{
int base,height,area;
struct triangle;
base=5;
height=6;
area=0.5*base*height;
printf("the area of the given triangle is %d",area);
return 0;
}
