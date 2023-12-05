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

int main() {
    char choice;
    int n;
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("\n%d is %s", n, isArmstrong(n) ? "an Armstrong number!\n" : "NOT an Armstrong number!\n");
        printf("Do you want to check another number? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'n' || choice == 'N') break;
    }
    return 0;
}