#include <stdio.h>

int main() {
    int arr[100], n, i, choice, pos, value, key;
    int sum, max, min, found;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\n===== Menu-Driven Array Operations =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Find Sum and Average\n");
        printf("6. Find Largest and Smallest Element\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Array Elements: ");
            for (i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;

        case 2:
            printf("Enter position (1-%d): ", n + 1);
            scanf("%d", &pos);

            if (pos < 1 || pos > n + 1) {
                printf("Invalid Position!\n");
            } else {
                printf("Enter element to insert: ");
                scanf("%d", &value);

                for (i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos - 1] = value;
                n++;

                printf("Element inserted successfully.\n");
            }
            break;

        case 3:
            printf("Enter position to delete (1-%d): ", n);
            scanf("%d", &pos);

            if (pos < 1 || pos > n) {
                printf("Invalid Position!\n");
            } else {
                for (i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;
                printf("Element deleted successfully.\n");
            }
            break;

        case 4:
            printf("Enter element to search: ");
            scanf("%d", &key);

            found = 0;
            for (i = 0; i < n; i++) {
                if (arr[i] == key) {
                    printf("Element found at position %d\n", i + 1);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Element not found.\n");
            break;

        case 5:
            sum = 0;
            for (i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum = %d\n", sum);
            printf("Average = %.2f\n", (float)sum / n);
            break;

        case 6:
            max = min = arr[0];

            for (i = 1; i < n; i++) {
                if (arr[i] > max)
                    max = arr[i];
                if (arr[i] < min)
                    min = arr[i];
            }

            printf("Largest Element = %d\n", max);
            printf("Smallest Element = %d\n", min);
            break;

        case 7:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}