#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int i,len1,len2;
    printf("Enter the string1:");
    scanf(" %[^\n]",str1);
    printf("Enter the string2:");
    scanf(" %[^\n]",str2);
    len1=strlen(str1)-1;
    len2=strlen(str2)-1;
    for(i=0;i<len2;i++)
    {
        str1[len1+i]=str2[i];
    }
    str1[len1+i]='\0';
    printf("The string is %s",str1);
    return 0;
}