#include <stdio.h>
int main() {
    char operation, choice;
    float num1, num2;
    do {
        printf("\nMenu:\n");
        printf("+. Addition (+)\n");
        printf("-. Subtraction (-)\n");
        printf(". Multiplication ()\n");
        printf("/. Division (/)\n");
         printf("Enter an operation (+, -, *, /): ");
        scanf(" %c", &operation);
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        switch(operation) {
            case '+':
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                else
                    printf("Error! Division by zero!\n");
                break;
            default:
                printf("Error! Invalid operation\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}