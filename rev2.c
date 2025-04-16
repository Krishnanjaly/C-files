#include<stdio.h>
int reverse(int *num)
{
    int rev=0;
    {
        while(*num!=0)
        {
            int rem=*num%10;
            rev=rev*10+rem;
            *num=*num/10;
        }
    }
    return rev;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int reversed=reverse(&n);
    printf("The reverse of the number is %d\n",reversed);
    return 0;
}