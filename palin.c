#include<stdio.h>
#include<string.h>
int main()
{
    char text[30];
    int flag=0,i,j,len;
    printf("Enter the string:");
    scanf("%s",text);
    len=strlen(text);
    for(i=len-1,j=0;i=len/2;i--,j++)
    {
        if(text[i]!=text[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("The word is not palindrome.");
    }
    else
    {
        printf("The word is palindrome.");
    }
    return 0;
}