#include <stdio.h>

int main() {
    int n, i, j, largest = -1, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            isPrime = 1;

            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime)
                largest = i;
        }
    }

    if (largest != -1)
        printf("Largest Prime Factor = %d", largest);
    else
        printf("No Prime Factor Found");

    return 0;
}