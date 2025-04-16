#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],charac;
    int i=0,count=0;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character:");
    charac=getchar();
    while(str[i]!='\0')
    {
        if(str[i]==charac)
        {
            count++;
        }
        i++;
    }
    printf("The frequency of the character %c is %d",charac,count);
    return 0;
}