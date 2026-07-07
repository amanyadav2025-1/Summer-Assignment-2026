#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    int issued;   // 0 = Available, 1 = Issued
};

int main() {
    struct Book books[100];
    int n = 0, choice, id, i, found;
    char title[100];

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &books[n].id);

            printf("Enter Book Title: ");
            getchar(); // Clear newline from buffer
            fgets(books[n].title, sizeof(books[n].title), stdin);
            books[n].title[strcspn(books[n].title, "\n")] = '\0';

            books[n].issued = 0;
            n++;
            printf("Book added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No books available.\n");
            } else {
                printf("\nLibrary Books:\n");
                printf("-------------------------------------------------\n");
                printf("ID\tTitle\t\t\tStatus\n");
                printf("-------------------------------------------------\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%-20s\t%s\n",
                           books[i].id,
                           books[i].title,
                           books[i].issued ? "Issued" : "Available");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Issue: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (books[i].id == id) {
                    found = 1;
                    if (books[i].issued == 0) {
                        books[i].issued = 1;
                        printf("Book issued successfully.\n");
                    } else {
                        printf("Book is already issued.\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
            break;

        case 4:
            printf("Enter Book ID to Return: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (books[i].id == id) {
                    found = 1;
                    if (books[i].issued == 1) {
                        books[i].issued = 0;
                        printf("Book returned successfully.\n");
                    } else {
                        printf("Book was not issued.\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
            break;

        case 5:
            printf("Thank you for using the Library Management System.\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}