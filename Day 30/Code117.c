#include <stdio.h>
#include <string.h>
int main() {
    int n, i;
    char name[50][30];
    int roll[50];
    float marks[50];
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Enter Name: ");
        scanf("%s", name[i]);
        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
    return 0;
}