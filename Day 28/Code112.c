#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int n = 0, choice, i;
    char searchName[50];

    while (1) {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Name: ");
            scanf(" %[^\n]", contacts[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", contacts[n].phone);

            n++;
            printf("Contact added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No contacts available.\n");
            } else {
                printf("\n----- Contact List -----\n");
                printf("Name\t\tPhone Number\n");
                printf("---------------------------------\n");

                for (i = 0; i < n; i++) {
                    printf("%-15s %s\n", contacts[i].name, contacts[i].phone);
                }
            }
            break;

        case 3:
            printf("Enter Name to Search: ");
            scanf(" %[^\n]", searchName);

            for (i = 0; i < n; i++) {
                if (strcmp(searchName, contacts[i].name) == 0) {
                    printf("\nContact Found\n");
                    printf("Name : %s\n", contacts[i].name);
                    printf("Phone: %s\n", contacts[i].phone);
                    break;
                }
            }

            if (i == n)
                printf("Contact not found.\n");

            break;

        case 4:
            printf("Enter Name to Delete: ");
            scanf(" %[^\n]", searchName);

            for (i = 0; i < n; i++) {
                if (strcmp(searchName, contacts[i].name) == 0) {
                    int j;
                    for (j = i; j < n - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }
                    n--;
                    printf("Contact deleted successfully.\n");
                    break;
                }
            }

            if (i == n)
                printf("Contact not found.\n");

            break;

        case 5:
            printf("Thank you for using the Contact Management System.\n");
            return 0;

        default:
            printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}