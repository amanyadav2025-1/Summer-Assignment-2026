#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 0)
        printf("0th Fibonacci number = 0");
    else if (n == 1)
        printf("1st Fibonacci number = 1");
    else {
        for (i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%dth Fibonacci number = %d", n, b);
    }

    return 0;
}