#include<stdio.h>
#include<math.h>
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
    switch (average)
    {
        case 100:
        case 99:
        case 98:
        case 97:
        case 96:
        case 95:
        case 94:
        case 93:
        case 92:
        case 91:
        case 90:
        printf("Grade 'O'");
        break;
        case 89:
        case 88:
        case 87:
        case 86:
        case 85:
        printf("Grade 'A'");
        break;
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
        printf("Grade 'B'");
        break;
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        case 74:
        case 73:
        case 72:
        case 71:
        case 70:
        printf("Grade 'C'");
        break;
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        printf("Grade 'D'");
        break;
        default:
        printf("Grade 'F'");
        break;
    }
    return 0;
}
