// Program to enter book records, using structures
#include <stdio.h>
#include <string.h>
struct Book {
char title[50];
char author[50];
int year;
float price;
};
int main() {
printf("Name : Atul kumar \t Class : BCA 1A\n");
printf("**************************************\n");
int n,i;
printf("Enter the number of books: ");
scanf("%d", &n);
struct Book books[n];
for (int i = 0; i < n; i++) {
printf("\nEnter details for book %d:\n", i);
printf("Enter book title: ");
getchar(); //
gets(books[i].title);
books[i].title[strcspn(books[i].title, "\n")] = '\0';
printf("Enter author name: ");
gets(books[i].author);
books[i].author[strcspn(books[i].author, "\n")] = '\0';
printf("Enter year of publication: ");
scanf("%d", &books[i].year);
printf("Enter price of the book: ");
scanf("%f", &books[i].price);
}
printf("\n--- Book Records ---\n");
for (int i = 0; i < n; i++) {
printf("\nBook %d:\n", i + 1);
printf("Title: %s\n", books[i].title);
printf("Author: %s\n", books[i].author);
printf("Year of Publication: %d\n", books[i].year);
printf("Price: %.2f\n", books[i].price);
}
return 0;
}