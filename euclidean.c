#include<stdio.h>
#include<math.h>
struct Points
{
    int x1;
    int x2;
    int y1;
    int y2;
};
int main()
{
    struct Points p1,p2;
    float d,a,b;
    printf("Enter the coordinates of the first point(x,y):");
    scanf("%d,%d",&p1.x1,&p1.y1);
    printf("Enter the coordinates of the second point(x,y):");
    scanf("%d,%d",&p2.x2,&p2.y2);
    a=p2.x2-p1.x1;
    b=p2.y2-p1.y1;
    d=sqrt((a*a)+(b*b));
    printf("The Euclidean distance between the coordinates is %f",d);
    return 0;
}