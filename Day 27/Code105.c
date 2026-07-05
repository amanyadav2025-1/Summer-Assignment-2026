#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s[100];
    int n = 0, choice, i, roll, found;
    while (1) {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);
            printf("Enter Name: ");
            scanf("%s", s[n].name);
            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);
            n++;
            printf("Student record added successfully.\n");
            break;
        case 2:
            if (n == 0) {
                printf("No records found.\n");
            } else {
                printf("\nStudent Records:\n");
                printf("Roll\tName\tMarks\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    printf("\nStudent Found:\n");
                    printf("Roll Number: %d\n", s[i].roll);
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Student record not found.\n");
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