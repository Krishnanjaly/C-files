#include<stdio.h>
int main()
{
    FILE *fp;
    char str;
    int c=0,word=0,line=0;
    fp=fopen("file.txt","w");
    if(fp==NULL)
    {
        printf("Error");
        return 1;
    }
    printf("File:\n");
    
    while((str=getc(fp))!=EOF)
    {
        c++;
        if((str==' ')||(str=='.'))
        {
            word++;
        }
        if(str=='\n')
        {
            line++;
        }
    }
    fclose(fp);
    printf("characters:%d\nWords:%d\nLines:%d\n",c,word,line);
    return 0;
}