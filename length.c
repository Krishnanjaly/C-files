#include<stdio.h>
int main()
{
    char str[100];
    int length=0;
    printf("Enter the string:");
    scanf(" %[^\n]",str);
    while(str[length]!='\0')
    {
        length++;
    }
    printf("The length of the string is %d",length);
    return 0;
}