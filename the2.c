#include <stdio.h>
int main() {
    char str[100];
    int count= 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 't') {
            int n;
            for (n = 1; n<3; n++) {
                if (str[i + n] != 'h' && str[i + n] != 'e') {
                    break;
                }
            }
            if(n == 3) {
                count++;
            }
        }
    }
    printf("Number of 'the' is %d\n", count);
    return 0;
}