


#include <stdio.h>

// Function to calculate factorial of a number
long factorial(int N) {
    long fact = 1;
    for (int i = 1; i <= N; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    // Input n and r
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Check if input is valid
    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! r should be less than or equal to n, and both should be non-negative.\n");
    } else {
        printf("nCr = %ld\n", nCr(n, r));
    }

    return 0;
}

 