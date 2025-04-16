#include<stdio.h>
int main()
{
    int num,n,i,j;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Multiplication table for three consecutive numbers is:\n");
    n=num+2;
    for(i=num;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",i,j,(i*j));
        }
        printf("\n");
    }
    return 0;
}