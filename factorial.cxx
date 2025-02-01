
	#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base condition
    }
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(n);
        printf("Factorial of %d is: %d\n", n, result);
    }
    return 0;

}