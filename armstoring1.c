#include <stdio.h>
#include <math.h>

int main() {
    int n, t, temp, count = 0, rem, sum = 0;

    // Input number
    printf("Enter the number: ");
    scanf("%d", &n);

    t = n;  // Store original number
    temp = n;  // Also store original number for comparison

    // Count the number of digits
    while (n != 0) {
        n = n / 10;
        count++;  // Increment digit count
    }

    // Reset n to original value for next loop
    n = temp;

    // Calculate the sum of powers of digits
    while (t != 0) {
        rem = t % 10;  // Get the last digit
        sum += (int)pow(rem, count);  // Add the power of the digit to sum
        t = t / 10;  // Remove the last digit
    }

    // Check if the sum equals the original number
    if (sum == temp) {
        printf("%d is an Armstrong number.\n", temp);
    } else {
        printf("%d is not an Armstrong number.\n", temp);
    }

    return 0;  // Return success
}
