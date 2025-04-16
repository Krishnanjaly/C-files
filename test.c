#include <stdio.h>
void sayHello();
void printHelloworld();
//function declaration
int main() {
    char choice;
    int menuchoice;
   
     do {
        printf("\nMenu:\n");
        printf("1. sayHello\n");
        printf("2. printHelloworld\n");
        printf("3. Exit\n");
        printf("Enter the option : ");
        scanf("%d", &menuchoice);
        switch(menuchoice) 
        {
            case 1:
                sayHello();
                break;
            case 2:
               printHelloworld();
                break;
             case 3:
                printf("Exiting");
                 break;
             default:printf("Invalid choice");
        }
  printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

return 0;
}
//function definition
void sayHello()
{       char name[15];
        printf("Enter the name");
        scanf("%s",name);
        printf("Hello,%s",name);

}
void printHelloworld()
{
 printf("Hello World");
}