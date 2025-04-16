#include<stdio.h>
#include<math.h>
int cubenum(int num)
{
    return pow(num,3);
}
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    int cube=cubenum(number);
    printf("The cube of %d is %d",number,cube);
    return 0;
}