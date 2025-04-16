#include<stdio.h>
#include<string.h>
int palindrome(char str[],int start,int end)
{
if(start>=end)
{
    return 1;
}
if(str[start]==str[end])
{
    return palindrome(str,start+1,end+1);
}
else
{
    return 0;
}
}
int main()
{
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    if(palindrome(str,0,len-1))
    {
        printf("It is palindrome\n");
    }
    else
    {
        printf("It is not palindrome\n");
    }
    return 0;
}