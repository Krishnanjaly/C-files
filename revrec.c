#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
    if(*str=='\0')
    {
        return;
    }
    reverse(str+1);
    char temp = *str;
    int len = strlen(str);
    str[0] = str[len - 1];
    str[len - 1] = temp;
}
int main()
{
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    printf("Original string:%s\n",str);
    reverse(str);
    printf("Reversed string:%s\n",str);
    return 0;
}