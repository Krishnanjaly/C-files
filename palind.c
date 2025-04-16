#include<stdio.h>
#include<string.h>
int main()
{
    char text[100];
    int len,flag=0;
    printf("Enter the text:");
    scanf("%s",text);
    len=strlen(text);
    for(int i=len-1,j=0;i>=len/2;i--,j++)
    {
        if(text[i]!=text[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The word is palindrome");
    }
    else
    {
        printf("The word is not palindrome");
    }
    return 0;
}