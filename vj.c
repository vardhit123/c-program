#include <stdio.h>

float findarea(int a, int b);        

int main()
{
    float base,height,area;

    printf("Enters two numbers: ");
    scanf("%f %f",&base,&height);

    area = findarea(base,height);        

    printf("area = %f",area);

    return 0;
}

float findarea(int a,int b)          
{
    int result;
    result = 0.5*a*b;
    return result;             
}
