#include <stdio.h>
int main() {
    char choice;
    int menuchoice;
    char name[15];
    do{
        printf("\nMenu:\n");
        printf("1. sayHello\n");
        printf("2. printHelloworld\n");
        printf("3. Exit\n");
        printf("Enter the option : ");
        scanf("%d", &menuchoice);
        switch(menuchoice) {
            case 1:
                printf("Enter the name:");
                scanf("%s",name);
                printf("Hello,%s",name);
                break;
            case 2:
                printf("Hello World");
                break;
             case 3:
                 break;
             default:printf("Invalid choice");
            }
            printf("\nDo you want to continue? (y/n): ");
            scanf(" %c", &choice);
            } while (choice == 'y' || choice == 'Y');
        
return 0;
}