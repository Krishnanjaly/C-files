#include <stdio.h>
int main()
{
    FILE *fp;
    char c;
    int ch=0,word=0,line=0,isWord=0;
    fp=fopen("me.txt","r");
    if (fp==NULL){
        printf("Error in opening the file");
        return 1;
    }
    printf("\nThe data in file is:\n");
    while((c=getc(fp))!=EOF)
        printf("%c",c);
    fclose(fp);
    fp=fopen("me.txt","r");
    while((c=getc(fp))!=EOF)
    {
        ch++;
        if((c==' '))
        {
            word++;
        }
        if (c=='\n')
        {
            line++;
        }
    }
    fclose(fp);
    printf("\nThe no of characters:%d\n ",ch);
    printf("The no. of lines:%d\n",line);
    printf("The no. of words:%d\n",word);
    return 0;    
}
