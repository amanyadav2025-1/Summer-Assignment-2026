#include <stdio.h>

int main() {
    int n, i, j, count, maxCount = 0, maxElement;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", maxElement);
    printf("Frequency = %d\n", maxCount);

    return 0;
}