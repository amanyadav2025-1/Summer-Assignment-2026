#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    int arr2[n2], intersection[n1];

    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                intersection[k++] = arr1[i];
                break;
            }
        }
    }

    if(k == 0) {
        printf("No common elements found.\n");
    } else {
        printf("Intersection of the arrays:\n");
        for(i = 0; i < k; i++) {
            printf("%d ", intersection[i]);
        }
    }

    return 0;
}