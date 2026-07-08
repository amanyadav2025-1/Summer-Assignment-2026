#include <stdio.h>
#include <string.h>
#define MAX 50
int roll[MAX];
char name[MAX][50];
float marks[MAX];
int count = 0;
void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);
    printf("Enter Student Name: ");
    scanf(" %[^\n]", name[count]);
    printf("Enter Marks: ");
    scanf("%f", &marks[count]);
    count++;
    printf("\nStudent record added successfully.\n");
}
void displayStudents() {
    int i;
    if(count == 0) {
        printf("\nNo records found.\n");
        return;
    }
    printf("\n-------------------------------\n");
    printf("Roll\tName\t\tMarks\n");
    printf("-------------------------------\n");
    for(i = 0; i < count; i++) {
        printf("%d\t%-15s%.2f\n", roll[i], name[i], marks[i]);
    }
}
void searchStudent() {
    int r, i, found = 0;
    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &r);
    for(i = 0; i < count; i++) {
        if(roll[i] == r) {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("\nStudent not found.\n");
}
void updateStudent() {
    int r, i, found = 0;
    printf("\nEnter Roll Number to Update: ");
    scanf("%d", &r);
    for(i = 0; i < count; i++) {
        if(roll[i] == r) {
            printf("Enter New Name: ");
            scanf(" %[^\n]", name[i]);
            printf("Enter New Marks: ");
            scanf("%f", &marks[i]);
            printf("\nRecord Updated Successfully.\n");
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("\nStudent not found.\n");
}
void deleteStudent() {
    int r, i, j, found = 0;
    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &r);
    for(i = 0; i < count; i++) {
        if(roll[i] == r) {
            for(j = i; j < count - 1; j++) {
                roll[j] = roll[j + 1];
                strcpy(name[j], name[j + 1]);
                marks[j] = marks[j + 1];
            }
            count--;
            printf("\nRecord Deleted Successfully.\n");
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("\nStudent not found.\n");
}
int main() {
    int choice;
    do {
        printf("\n==============================");
        printf("\n Student Management System");
        printf("\n==============================");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                printf("\nThank You!\n");
                break;
            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 6);
    return 0;
}