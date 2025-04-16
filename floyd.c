#include<stdio.h>
int main()
{
  int num,i,j,n=1;
  printf("Enter no.of rows for Floyd's Triangle:");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
    for(j=1;j<=i;j++)
    {
        printf("%d ",n);
        n++;
    }
    printf("\n");
  }
  return 0;
}