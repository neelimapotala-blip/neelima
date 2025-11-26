#include <stdio.h>

// Function to calculate the sum of first 'n' natural numbers
int calculateSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int num;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the entered number is positive
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        // Call the calculateSum function with 'num' as an argument
        int result = calculateSum(num);
        printf("The sum of the first %d natural numbers is: %d\n", num, result);
    }

    return 0;
}
