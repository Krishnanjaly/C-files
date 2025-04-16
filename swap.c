#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the First Number:");
    scanf("%d",&x);
    printf("Enter the Second Number:");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping,First Number=%d",x);
    printf("\nAfter swapping,Second Number=%d",y);
    return 0;
}