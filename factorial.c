#include<stdio.h>
int main()
{
  int n;
  printf("Enter the digit:");
  scanf("%d",&n);
  int fact=1,i=1;
  while(i<=n)
  {
   fact=fact*i;
   i++;
  }
  printf("Factorial of the number is %d",fact);
  return 0;
}