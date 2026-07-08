#include <stdio.h>
#include <string.h>
int main() {
    int n, i, searchId, found = 0;
    int bookId[50];
    char title[50][50];
    char author[50][50];
    printf("Enter the number of books: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);
        printf("Enter Book Title: ");
        scanf(" %[^\n]", title[i]);
        printf("Enter Author Name: ");
        scanf(" %[^\n]", author[i]);
    }
    printf("\n===== Library Records =====\n");
    printf("%-10s %-30s %-20s\n", "Book ID", "Title", "Author");
    for(i = 0; i < n; i++) {
        printf("%-10d %-30s %-20s\n", bookId[i], title[i], author[i]);
    }
    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchId);
    for(i = 0; i < n; i++) {
        if(bookId[i] == searchId) {
            found = 1;
            printf("\nBook Found!\n");
            printf("Book ID : %d\n", bookId[i]);
            printf("Title   : %s\n", title[i]);
            printf("Author  : %s\n", author[i]);
            break;
        }
    }
    if(found == 0) {
        printf("\nBook not found.\n");
    }
    return 0;
}