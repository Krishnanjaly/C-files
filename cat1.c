#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30],str2[30];
    int i,len1,len2;
    i=0;
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    str1[len1]=' ';
    len1++;
    for(i=0;i<=len2;i++)
    {
        str1[len1+i]=str2[i];
    }
    str1[len1+i]='\0';
    printf("%s",str1);
    return 0;
}