#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("===== Simple Quiz Application =====\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 2)
        score++;

    printf("\nQ2. Which language is primarily used for C programming?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 3)
        score++;

    printf("\nQ3. How many days are there in a leap year?\n");
    printf("1. 365\n2. 366\n3. 364\n4. 367\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 2)
        score++;

    printf("\nQ4. Which symbol is used for single-line comments in C?\n");
    printf("1. /* */\n2. //\n3. #\n4. %%\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 2)
        score++;

    printf("\nQ5. Which function is used to print output in C?\n");
    printf("1. scanf()\n2. print()\n3. printf()\n4. gets()\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 3)
        score++;

    printf("\n===== Quiz Result =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}