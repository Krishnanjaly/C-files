#include<stdio.h>
#include<string.h>
int main()
{
    char word[30];
    int i,total=1;
    printf("Enter the string:");
    scanf("%[^\n]",word);
    int len=strlen(word);
    strupr(word);
    for(i=0;i<len;i++)
    {
        if(word[i]==' ')
        {
            total++;
        }
    }
    printf(" The total number of words in a string:%d",total);
    return 0;
}