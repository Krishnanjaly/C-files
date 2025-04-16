#include<stdio.h>
int main()
{
    int n,reversed_number=0;
    printf("Enter the number to be reversed:");
    scanf("%d",&n);
    while(n>0)
    {
        reversed_number=(reversed_number*10)+(n%10);
        n=n/10;
    }
    printf("Reversed number=%d",reversed_number);
    return 0;
}