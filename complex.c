#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,re,img,i,Result;
    printf("Enter the values of a,b,c,d:");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    re=a+c;
    img=b+d;
    i=sqrt(-1);
    Result=re+i*img;
    printf("Result=%d+%di",re,img);
    return 0;
}