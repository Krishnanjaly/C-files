#include<stdio.h>
int main()
{
    int n,rev=0,digit,*ptr;
    printf("Enter a number:");
    scanf("%d",&n);
    ptr=&n;
    while(*ptr!=0)
    {
        digit=*ptr % 10;
        rev=rev*10+digit;
        *ptr=*ptr/10;
    }
    printf("The reverse of the number is %d\n",rev);
    return 0;
}