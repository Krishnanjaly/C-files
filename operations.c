#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers x and y:");
    scanf("%d,%d",&x,&y);
    printf("Number1 + Number2=%d",x+y);
    printf("\nNumber1 - Number2=%d",x-y);
    printf("\nNumber1 * Number2=%d",x*y);
    printf("\nNumber1 / Number2=%d",x/y);
    printf("\nNumber1 %% Number2=%d",x%y);
    return 0;
}