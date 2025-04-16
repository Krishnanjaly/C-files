#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the values of a,b,c,d:");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    e=a+b-c+d;
    printf("\n%d+%d-%d+%d=%d",a,b,c,d,e);
    e=a*b/c+d;
    printf("\n%d*%d/%d+%d=%d",a,b,c,d,e);
    e=1+a*b%c;
    printf("\n1+%d*%d%%%d=%d",a,b,c,e);
    e=a+d%b-c;
    printf("\n%d+%d%%%d-%d=%d",a,d,b,c,e);
    return 0;
    
}