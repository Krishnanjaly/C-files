#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,rollno,percentage;
    char name[20];
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter your roll no:");
    scanf("%d",&rollno);
    printf("Enter the mark of Subject 1:");
    scanf("%d",&sub1);
    printf("Enter the mark of Subject 2:");
    scanf("%d",&sub2);
    printf("Enter the mark of Subject 3:");
    scanf("%d",&sub3);
    percentage=(sub1+sub2+sub3)*100/300;
    printf("Percentage=%d",percentage);
    if(percentage>=75)
    {
        printf("\nFirst class with distinction");
    }
    else if((percentage>=60)&&(percentage<75))
    {
        printf("\nFirst class");
    }
    else
    {
        printf("\nSecond class");
    }
    return 0;
}