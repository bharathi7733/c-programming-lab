#include <stdio.h>

int main() {
    int choice;
    double balance = 1000.00, amount;

    while(1) {
        printf("\n=== ATM MENU ===\n");
        printf("1. View Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your Balance: ₹%.2lf\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ₹");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit Successful! New Balance: ₹%.2lf\n", balance);
                } else {
                    printf("Invalid amount! Deposit must be greater than ₹0.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ₹");
                scanf("%lf", &amount);
                if (amount <= 0) {
                    printf("Invalid amount! Withdrawal must be greater than ₹0.\n");
                } else if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful! New Balance: ₹%.2lf\n", balance);
                } else {
                    printf("Insufficient Balance! Available: ₹%.2lf\n", balance);
                }
                break;

            case 4:
                printf("Thank you! Visit Again.\n");
                return 0;

            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}
