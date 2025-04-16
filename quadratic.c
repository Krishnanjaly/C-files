#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x,y;
    printf("Enter values of a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    x=(-b+sqrt(b*b-4*a*c))/(2*a);
    y=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("The two solutions of the equation are %f and %f",x,y);
    return 0;
}