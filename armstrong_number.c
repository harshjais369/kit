#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int sum = 0, temp = n, digitCounter = 0;
    while (temp != 0) {
        temp /= 10;
        digitCounter++;
    }
    temp = n;
    while (temp != 0) {
        sum += pow(temp % 10, digitCounter);
        temp /= 10;
    }
    return sum == n;
}

void printArmstrong(int n) {
    for (int i = 1; i <= n; i++) if (isArmstrong(i)) printf("%d ", i);
}

int main() {
    int n;
    system("clear");
    printf("---------- Armstrong number ---------- \n\n");
    printf("1. Print Armstrong numbers from 1 to n\n");
    printf("2. Check if a number is Armstrong number\n");
    printf("3. Exit\n\n");
    printf("Enter your choice: ");
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("\n -> Armstrong numbers [1 to %d]: ", n);
            printArmstrong(n);
            printf("\n");
            break;
        case 2:
            while (1) {
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("\n -> %d is %s", n, isArmstrong(n) ? "an Armstrong number!" : "NOT an Armstrong number!");
                printf("\n\nDo you want to check another number? (y/n): ");
                char choice;
                scanf(" %c", &choice);
                if (choice == 'n' || choice == 'N') break;
            }
            break;
        case 3:
            printf("\n -> Exiting...\n");
            exit(0);
        default:
            printf(" -> Invalid choice! Exiting...\n");
    }
    return 0;
}