#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item items[100];
    int n = 0, choice, id, i, found;
    int qty;

    while (1) {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Item ID: ");
            scanf("%d", &items[n].id);

            printf("Enter Item Name: ");
            scanf(" %[^\n]", items[n].name);

            printf("Enter Quantity: ");
            scanf("%d", &items[n].quantity);

            printf("Enter Price: ");
            scanf("%f", &items[n].price);

            n++;
            printf("Item added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No items available.\n");
            } else {
                printf("\n--------------------------------------------------------\n");
                printf("ID\tName\t\tQuantity\tPrice\n");
                printf("--------------------------------------------------------\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%-15s\t%d\t\t%.2f\n",
                           items[i].id,
                           items[i].name,
                           items[i].quantity,
                           items[i].price);
                }
            }
            break;

        case 3:
            printf("Enter Item ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (items[i].id == id) {
                    printf("\nItem Found\n");
                    printf("ID       : %d\n", items[i].id);
                    printf("Name     : %s\n", items[i].name);
                    printf("Quantity : %d\n", items[i].quantity);
                    printf("Price    : %.2f\n", items[i].price);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Item not found.\n");
            break;

        case 4:
            printf("Enter Item ID: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (items[i].id == id) {
                    printf("Enter New Quantity: ");
                    scanf("%d", &qty);

                    items[i].quantity = qty;
                    printf("Quantity updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Item not found.\n");
            break;

        case 5:
            printf("Thank you for using the Inventory Management System.\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}