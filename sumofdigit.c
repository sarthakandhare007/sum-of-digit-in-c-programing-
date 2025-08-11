#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;   // Get last digit
        sum += digit;       // Add to sum
        num /= 10;          // Remove last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
