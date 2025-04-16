#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    printf("Enter string 1:");
    gets(str1);
    printf("Enter string 2:");
    gets(str2);
    strcat(str1," ");
    strcat(str1,str2);
    printf("Concatenated string:%s",str1);
    return 0;
}