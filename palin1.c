#include<stdio.h>
int main()
{
    int flag=0,len=0,i,j;
    char text[100];
    printf("Enter the string:");
    scanf("%s",text);
    while(text[len]!='\0')
    {
        len++;
    }
    for(i=len-1,j=0;j<len/2;i--,j++)
    {
        if(text[i]!=text[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("The word is not palindrome");
    }
    else
    {
        printf("The word is palindrome");
    }
    return 0;
}