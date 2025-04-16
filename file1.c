#include <stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char c[50];
    fp=fopen("me.txt","w");
    if(fp==NULL){
        printf("Error.\n");
        return 1;
    }
    printf("Enter the string:\n");
    scanf(" %[^\n]",c);
    fprintf(fp,"%s",c);
    fclose(fp);
    fp=fopen("me.txt","r");
    if(fp==NULL){
        printf("Error\n");
        return 1;
    }
    fscanf(fp," %[^\n]",c);
    printf("Data is:%s\n",c);
    fclose(fp);
    printf("\nAfter appending:\n");
    fp=fopen("me.txt","a");
    if(fp==NULL){
        printf("Error\n");
        return 1;
    }
    printf("Enter the string to be appended:");
    scanf(" %[^\n]",c);
    fprintf(fp,"%s",c);
    fclose(fp);
    fp=fopen("me.txt","r");
    if(fp==NULL){
        printf("Error\n");
        return 1;
    }
    printf("Data in the file:\n");
    int a;
    while ((a = fgetc(fp)) != EOF) {
    putchar(a);
    }
    fclose(fp);
    return 0;
}
