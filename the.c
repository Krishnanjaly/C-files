#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0,i,T,H,E,space;
    printf("Enter the string:");
    scanf("%s",str);
    int n=strlen(str);
    strupr(str);
    for(i=0;i<n-2;i++)
    {
        T=str[i]=='T';   
        H=str[i+1]=='H';
        E=str[i+2]=='E'; 
        space=str[i+3]==' '|| str[i+3]=='\0';
        if((T && H && E && space)==1)
        {
            count++;
        } 
    }
    printf("Number of 'the' in the string is %d",count);
    return 0;
}