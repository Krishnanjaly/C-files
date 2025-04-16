#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char A[30];
    int i,count1=0,count2=0,count3=0,count4=0;
    printf("Enter the string:");
    fgets(A,sizeof(A),stdin);
    int n=strlen(A);
    for(i=0;i<n;i++)
    {
        if(A[i]=='a'||A[i]=='A'||A[i]=='e'||A[i]=='E'||A[i]=='I'||A[i]=='i'||A[i]=='O'||A[i]=='o'||A[i]=='U'||A[i]=='u')
        {
            count1++;
        }
        else if(A[i]==' ')
        {
            count2++;
        }
        else if(A[i]>='0' && A[i]<='9')
        {
            count4++;
        }
        if(isalpha(A[i]))
        {
            count3++;
        }
    }
    printf("The number of vowels in the string is %d\n",count1);
    printf("The number of words in the string is %d\n",count2+1);
    printf("The number of alphabets in the string is %d\n",count3);
    printf("The number of digits in the string is %d\n",count4);
    
    int count5=0;
    char k;
    printf("Enter the character to be searched:");
    scanf(" %c",&k);
    for(i=0;i<n;i++)
    {
        if(A[i]==k)
    {
        count5++;
    }
    }
    if(count5>0)
    {
        printf("Number of occurences of the character is %d\n",count5);
    }
    else
    {
        printf("The character is not present in the string\n");
    }
    return 0;
}