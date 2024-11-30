#include <stdio.h>

int main() {
    int n;
     long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is negative
    if (n <= 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a loop
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

        printf("Factorial of =%d\n", factorial);
    }

    return 0;
}