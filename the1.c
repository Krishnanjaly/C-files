#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int count = 0, i;
    printf("Enter the string: ");
    scanf("%s", str);
    int n = strlen(str);
    strupr(str);
    
    for(i = 0; i < n - 2; i++)
    {
        int T = str[i] == 'T';
        int H = str[i + 1] == 'H';
        int E = str[i + 2] == 'E';
        int space = str[i + 3] == ' ' || str[i + 3] == '\0';
        
        if(T && H && E && space)
        {
            count=count+1;
        } 
    }
    
    printf("Number of 'the' in the string is %d\n", count);
    return 0;
}