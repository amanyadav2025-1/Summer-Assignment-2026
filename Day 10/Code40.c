#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for (i = 1; i <= 5; i++) {

        // Print spaces
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // Print ascending characters
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }

        // Print descending characters
        ch -= 2;
        while (ch >= 'A') {
            printf("%c", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}