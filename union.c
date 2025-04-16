#include <stdio.h>
#include <string.h>
union BookInfo {
    char bookname[100];
    float price;
    long long isbn;
};
int main() {
   union BookInfo books;
        printf("Book name: ");
        scanf("%s", books.bookname); 
        printf("Book Price: ");           
        scanf("%f", &books.price);
        printf("ISBN: ");
        scanf("%lld", &books.isbn);
    printf("\nDetails of Books:\n");
    printf("\nBook Name:\tBook Price\tISBN\n");
        printf("%s\t", books.bookname);
        printf("%f\t", books.price);
        printf("%lld\n", books.isbn);
      return 0;
}