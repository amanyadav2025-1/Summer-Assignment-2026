#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;
};
int main() {
    struct Student s[100];
    int n = 0, choice, i, roll, found;
    while (1) {
        printf("\n===== Marksheet Generation System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Marksheet by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);
            printf("Enter Student Name: ");
            scanf("%s", s[n].name);
            printf("Enter Marks in 5 Subjects: ");
            scanf("%d%d%d%d%d",
                  &s[n].m1, &s[n].m2, &s[n].m3,
                  &s[n].m4, &s[n].m5);
            s[n].total = s[n].m1 + s[n].m2 + s[n].m3 + s[n].m4 + s[n].m5;
            s[n].percentage = s[n].total / 5.0;
            if (s[n].percentage >= 90)
                s[n].grade = 'A';
            else if (s[n].percentage >= 75)
                s[n].grade = 'B';
            else if (s[n].percentage >= 60)
                s[n].grade = 'C';
            else if (s[n].percentage >= 40)
                s[n].grade = 'D';
            else
                s[n].grade = 'F';
            n++;
            printf("Marksheet generated successfully.\n");
            break;
        case 2:
            if (n == 0) {
                printf("No student records found.\n");
            } else {
                printf("\n==============================\n");
                for (i = 0; i < n; i++) {
                    printf("\nRoll No     : %d\n", s[i].roll);
                    printf("Name        : %s\n", s[i].name);
                    printf("Marks       : %d %d %d %d %d\n",
                           s[i].m1, s[i].m2, s[i].m3, s[i].m4, s[i].m5);
                    printf("Total       : %d\n", s[i].total);
                    printf("Percentage  : %.2f%%\n", s[i].percentage);
                    printf("Grade       : %c\n", s[i].grade);
                    printf("==============================\n");
                }
            }
            break;
        case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);
            found = 0;
            for (i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    printf("\n----- Student Marksheet -----\n");
                    printf("Roll No     : %d\n", s[i].roll);
                    printf("Name        : %s\n", s[i].name);
                    printf("Marks       : %d %d %d %d %d\n",
                           s[i].m1, s[i].m2, s[i].m3, s[i].m4, s[i].m5);
                    printf("Total       : %d\n", s[i].total);
                    printf("Percentage  : %.2f%%\n", s[i].percentage);
                    printf("Grade       : %c\n", s[i].grade);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Student record not found.\n");

            break;
        case 4:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}