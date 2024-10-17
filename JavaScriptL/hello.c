
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_PATRONS 50

typedef struct {
    char title[50];
    char author[50];
    int isbn;
    int quantity;
} Book;

typedef struct {
    char name[50];
    int id;
    int borrowed;
} Patron;

typedef struct {
    int patronID;
    int bookISBN;
    char date[10];
} Transaction;

Book books[MAX_BOOKS];
Patron patrons[MAX_PATRONS];
Transaction transactions[MAX_BOOKS];
int bookCount = 0, patronCount = 0, transactionCount = 0;

void addBook() {
    printf("Enter book title: ");
    scanf("%s", books[bookCount].title);
    printf("Enter book author: ");
    scanf("%s", books[bookCount].author);
    printf("Enter book ISBN: ");
    scanf("%d", &books[bookCount].isbn);
    printf("Enter quantity: ");
    scanf("%d", &books[bookCount].quantity);
    bookCount++;
}

void displayBooks() {
    for (int i = 0; i < bookCount; i++) {
        printf("Title: %s, Author: %s, ISBN: %d, Quantity: %d\n", books[i].title, books[i].author, books[i].isbn, books[i].quantity);
    }
}

int main() {
    int choice;
    while (1) {
        printf("1. Add Book\n2. Display Books\n3. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
