#include<stdio.h>
void main()
{
    char letter;
    printf("Enter a letter:");
    scanf("%c",&letter);
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
    {
         printf("Letter is a vowel.");
    }
    else
    {
        printf("Letter is consonant.");
    }
}