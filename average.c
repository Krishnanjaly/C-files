#include<stdio.h>
int main()
{
    int x,y,z;
    float average;
    printf("Enter three numbers x,y,z:");
    scanf("%d,%d,%d",&x,&y,&z);
    average=(x+y+z)/3;
    printf("The average of three numbers=%8.3f",average);
    return 0;
}