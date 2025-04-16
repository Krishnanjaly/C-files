#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int let=0,num=0,exp=0,i;
    printf("Enter the string:");
    scanf("%[^\n]",str);
    strupr(str);
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            let++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            num++;
        }
        else
        {
            exp++;
        }
    }
    printf("Total number of letters:%d\n",let);
    printf("Total number of numbers:%d\n",num);
    printf("Total number of special expressions:%d\n",exp);
    return 0;
}