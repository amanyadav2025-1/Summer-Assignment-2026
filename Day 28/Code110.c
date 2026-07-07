#include <stdio.h>

struct BankAccount {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount account;
    int choice;
    float amount;

    // Create Account
    printf("===== Bank Account System =====\n");
    printf("Enter Account Number: ");
    scanf("%d", &account.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", account.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &account.balance);

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Display Account Details\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\n--- Account Details ---\n");
            printf("Account Number : %d\n", account.accNo);
            printf("Account Holder : %s\n", account.name);
            printf("Balance         : %.2f\n", account.balance);
            break;

        case 2:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            if (amount > 0) {
                account.balance += amount;
                printf("Amount Deposited Successfully.\n");
                printf("Current Balance: %.2f\n", account.balance);
            } else {
                printf("Invalid Amount!\n");
            }
            break;

        case 3:
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if (amount <= account.balance && amount > 0) {
                account.balance -= amount;
                printf("Amount Withdrawn Successfully.\n");
                printf("Current Balance: %.2f\n", account.balance);
            } else {
                printf("Insufficient Balance or Invalid Amount!\n");
            }
            break;

        case 4:
            printf("Current Balance: %.2f\n", account.balance);
            break;

        case 5:
            printf("Thank you for using the Bank Account System.\n");
            return 0;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}