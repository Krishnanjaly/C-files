#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of the candidate:");
    scanf("%d",&age);
    if(age<18)
    {
        printf("You are not eligible to cast your vote");
    }
    else
    {
        printf("Congratulations!You are eligible to cast your vote");
    }
    return 0;
}