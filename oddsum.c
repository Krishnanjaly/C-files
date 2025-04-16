#include <stdio.h>

int main() {
    int n, sum_even = 0, sum_odd = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            sum_even += arr[i];
        } else {
            sum_odd += arr[i];
        }
    }

    if(sum_even > sum_odd) {
        printf("Sum of all even elements is larger: %d\n", sum_even);
    } else {
        printf("Sum of all odd elements is larger: %d\n", sum_odd);
    }

    return 0;
}
