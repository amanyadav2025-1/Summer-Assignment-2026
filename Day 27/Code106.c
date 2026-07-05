#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp[100];
    int n = 0, choice, i, id, found;
    while (1) {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);
            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);
            printf("Enter Salary: ");
            scanf("%f", &emp[n].salary);
            n++;
            printf("Employee record added successfully.\n");
            break;
        case 2:
            if (n == 0) {
                printf("No employee records found.\n");
            } else {
                printf("\nEmployee Records:\n");
                printf("ID\tName\tSalary\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
                }
            }
            break;
        case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d", &id);
            found = 0;
            for (i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    printf("\nEmployee Found:\n");
                    printf("ID     : %d\n", emp[i].id);
                    printf("Name   : %s\n", emp[i].name);
                    printf("Salary : %.2f\n", emp[i].salary);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Employee record not found.\n");
            }
            break;
        case 4:
            printf("Exiting program...\n");
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}