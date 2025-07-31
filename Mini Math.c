#include <stdio.h>

// Function Prototypes
void prime(int temp);
void factorial(int temp);
int reversed(int temp);
void check_palindrome(int number);

// Prime Number Function
void prime(int temp) {
    int count = 0;
    for(int i = 1; i <= temp; i++) {
        if(temp % i == 0) {
            count++;
        }
    }
    if(count == 2) {
        printf("It's a prime number\n");
    } else {
        printf("It's not a prime number\n");
    }
}

// Factorial Function
void factorial(int temp) {
    int fact = 1;
    for(int i = 1; i <= temp; i++) {
        fact *= i;
    }
    printf("Factorial is: %d\n", fact);
}

// Reverse Function
int reversed(int temp) {
    int rev = 0, last = 0;
    while(temp > 0) {
        last = temp % 10;
        rev = rev * 10 + last;
        temp = temp / 10;
    }
    return rev;
}

// Palindrome Function
void check_palindrome(int number) {
    int rev = reversed(number);
    printf("Reversed number is: %d\n", rev);
    if(number == rev) {
        printf("It's a palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
}

// Main Function
int main() {
    int choice, number;

    while(1) {
        printf("\n** Mini-Math-App **\n");
        printf("Press 1 for Prime Number\n");
        printf("Press 2 for Factorial\n");
        printf("Press 3 for Reverse a Number\n");
        printf("Press 4 for Palindrome\n");
        printf("Press 5 for Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 5) {
            printf("Exiting...\n");
            break;
        }

        if(choice >= 1 && choice <= 4) {
            printf("Enter a number: ");
            scanf("%d", &number);
        }

        switch(choice) {
            case 1:
                prime(number);
                break;
            case 2:
                factorial(number);
                break;
            case 3:
                printf("Reversed number is: %d\n", reversed(number));
                break;
            case 4:
                check_palindrome(number);
                break;
            default:
                printf("Invalid input!\n");
                break;
        }
    }

    return 0;
}
