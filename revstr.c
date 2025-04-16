#include<stdio.h>
int main()
{
    char text[100],rev[100];
    int len=0,i;
    printf("Enter the string:");
    scanf("%s",text);
    while(text[len]!='\0')
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        rev[i]=text[len-1-i];
    }
    rev[len]='\0';
    printf("The reverse of the string is %s",rev);
    return 0;
}