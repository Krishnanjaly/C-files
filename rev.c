#include <stdio.h>

int main() {
    int n,rev = 0,x;
    printf("Enter a number:");
    scanf("%d",&n);
    while (n>=1) {
        x=n%10;
        rev=rev*10+x;
        printf("%d",x);
        n=n/10;
    }
    return 0;
}