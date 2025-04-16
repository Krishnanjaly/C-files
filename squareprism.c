#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i==1||i==num)
        {
           for(j=1;j<=num;j++)
           {
            printf("*");
           }
        }
        else
        {
            for(j=1;j<=num;j++)
            {
              if(j==1||j==num)
            {
              printf("*");
            }
            else
            {
                printf(" 
                ");
            }
            }
        }
        printf("\n");
    }
    return 0;
}