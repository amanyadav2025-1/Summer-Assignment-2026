#include <stdio.h>
#include <string.h>
int main() {
    int n, i, searchId, found = 0;
    int empId[50];
    char name[50][50];
    char department[50][30];
    float salary[50];
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);
        printf("Enter Employee Name: ");
        scanf(" %[^\n]", name[i]);
        printf("Enter Department: ");
        scanf(" %[^\n]", department[i]);
        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }
    printf("\n========== Employee Records ==========\n");
    printf("%-10s %-20s %-20s %-10s\n",
           "ID", "Name", "Department", "Salary");
    for(i = 0; i < n; i++) {
        printf("%-10d %-20s %-20s %.2f\n",
               empId[i], name[i], department[i], salary[i]);
    }
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchId);
    for(i = 0; i < n; i++) {
        if(empId[i] == searchId) {
            found = 1;
            printf("\nEmployee Found!\n");
            printf("Employee ID : %d\n", empId[i]);
            printf("Name        : %s\n", name[i]);
            printf("Department  : %s\n", department[i]);
            printf("Salary      : %.2f\n", salary[i]);
            break;
        }
    }
    if(found == 0) {
        printf("\nEmployee not found.\n");
    }
    return 0;
}