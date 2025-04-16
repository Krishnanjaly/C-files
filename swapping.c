#include<stdio.h>
int main()
{
    int number1,number2,temp;
    printf("Enter the first number:");
    scanf("%d",&number1);
    printf("Enter the second number:");
    scanf("%d",&number2);
    temp=number1;
    number1=number2;
    number2=temp;
    printf("After swapping,First Number= %d",number1);
    printf("\nAfter swapping,Second Number= %d",number2);
    return 0;
} 