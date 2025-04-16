#include <stdio.h>
int main() 
{
    char str[100];
    int max= 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        max++;
    }
    printf("Maximum number of characters in the string: %d\n", max);
    return 0;
}