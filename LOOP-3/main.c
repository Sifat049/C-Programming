#include <stdio.h>

int main() {
    int n;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input. N should be greater than or equal to 1.\n");
        return 1;
    }

    // Loop to generate and print the series
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            printf("1");
        } else {
            printf("0");
        }

        if (i < n) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
