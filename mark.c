#include<stdio.h>
int main()
{
    int mark,grade,sem,sub,sub1,sub2,sub3,sub4,sub5,sub6,totalmark,average;
    char name[20];
    long long p;
    printf("Enter the student name:");
    scanf("%c",&name);
    printf("Enter your register number:\n");
    scanf("%lld",&p);
    printf("Enter your semester:\n");
    scanf("%d",&sem);
    printf("Enter the no. of subjects:\n");
    scanf("%d",&sub);
    printf("Enter the mark of subject 1:\n");
    scanf("%d",&sub1);
    printf("Enter the mark of subject 2:\n");
    scanf("%d",&sub2);
    printf("Enter the mark of subject 3:\n");
    scanf("%d",&sub3);
    printf("Enter the mark of subject 4:\n");
    scanf("%d",&sub4);
    printf("Enter the mark of subject 5:\n");
    scanf("%d",&sub5);
    printf("Enter the mark of subject 6:\n");
    scanf("%d",&sub6);
    totalmark=(sub1+sub2+sub3+sub4+sub5+sub6);
    average=totalmark/6;
switch (average / 10) 
{
        case (90-100):
          printf("Grade 'O'");
          break;
        case (80-89):
          printf("Grade 'A'");
          break;
        case (70-79):
          printf("Grade 'B'");
          break;
        case (60-69):
          printf("Grade 'C'");
          break;
        case (50-59):
          printf("Grade 'D'");
          break;
        default:
          printf("Grade 'F'");
          break;
    }

    return 0;
}