#include<stdio.h>
int main()
{
    int num,originalNum,rev=0,sum=0,digit;
    printf("Enter a number:");
    scanf("%d",&num);
    originalNum=num;
    while(num!=0)
    {
        digit=num%10;
        sum+=digit;
        rev=rev*10+digit;
        num=num/10;
    }
    printf("Sum of digits is %d\n",sum);
    printf("Reverse of the number is %d\n",rev);
    if(originalNum==rev)
    {
        printf("It is palindrome\n");
    }
    else{
        printf("It is not palindrome\n");
    }
    return 0;
}