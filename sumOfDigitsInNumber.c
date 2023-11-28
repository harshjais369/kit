#include <stdio.h>

int main() {
    long number;
    printf("Enter a number: ");
    scanf("%ld", &number);

    long sum = 0;
    long temp = number;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits in %ld is %ld\n", number, sum);

    return 0;
}
