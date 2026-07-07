#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        printf("\n===== Menu-Driven Calculator =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Division by zero is not allowed.\n");
            break;

        case 5: {
            int a, b;
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);

            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Modulus by zero is not allowed.\n");
            break;
        }

        case 6:
            printf("Thank you for using the Calculator.\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}