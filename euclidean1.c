#include<stdio.h>
#include<math.h>
struct Points
{
    int x;
    int y;
};
int main()
{
    struct Points p1,p2;
    float d,a,b;
    printf("Enter the coordinates of the first point(x,y):");
    scanf("%d,%d",&p1.x,&p1.y);
    printf("Enter the coordinates of the second point(x,y):");
    scanf("%d,%d",&p2.x,&p2.y);
    a=p2.x-p1.x;
    b=p2.y-p1.y;
    d=sqrt((a*a)+(b*b));
    printf("The Euclidean distance between the coordinates is %f",d);
    return 0;
}