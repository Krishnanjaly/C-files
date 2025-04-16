#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int number1,number2,temp;
    printf("Enter the first number:");
    scanf("%d",&number1);
    printf("Enter the second number:");
    scanf("%d",&number2);
    printf("After swapping,First Number= %d\nSecond Number= %d",number1,number2);
    swap(&number1,&number2);
    printf("\nAfter swapping,First number=%d\nSecond Number= %d",number1,number2);
    return 0;
} 