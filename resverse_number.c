#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);
    
    int reversedNum = reverseNumber(num);
    printf("Reversed number: %d\n", reversedNum);

    if (num == reversedNum)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");
    
    return 0;
}
