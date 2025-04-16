#include<stdio.h>
int main()
{
    int age1,age2,age3;
    printf("Enter the age of the Ram:");
    scanf("%d",&age1);
    printf("Enter the age of the Shyam:");
    scanf("%d",&age2);
    printf("Enter the age of the Ajay:");
    scanf("%d",&age3);
    if((age1<age2)&&(age1<age3))
    {
        printf("Ram is younger than Shyam and Ajay");
    }
    else if((age2<age1)&&(age2<age3))
    {
        printf("Shyam is younger than Ajay and Ram");
    }
    else
    {
        printf("Ajay is younger than Ram and Shyam");
    }
    return 0;
}