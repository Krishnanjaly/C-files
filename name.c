#include<stdio.h>
int main()
{
    char n[30],a[50],c[40];
    long p;
    printf("Enter your name:");
    scanf("%s",&n);
    printf("Enter your address:");
    scanf("%s",&a);
    printf("Enter your city:");
    scanf("%s",&c);
    printf("Enter your phone number:");
    scanf("%ld",&p);
    printf("My name is %s.\nMy address is %s.\nI'm from %s.\nMy phone number is %ld.",n,a,c,p);
    return 0;
}