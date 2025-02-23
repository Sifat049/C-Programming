/*Write a program (WAP) that will take N numbers as inputs and compute
their average.
(Restriction: Without using any array)

Sample input	                         Sample output
3
10         20        30.5	             AVG of 3 inputs:  20.166667
2
22.4     11.1	                                 AVG of 2 inputs:  16.750000

*/


#include <stdio.h>

int main() {
    int n;
    double num, sum = 0;

    // Input the value of N
    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of inputs should be greater than 0.\n");
        return 1;
    }

    // Input and calculate the sum
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &num);
        sum += num;
    }

    // Calculate and print the average
    double average = sum / n;
    printf("Average of %d inputs: %f\n", n, average);

    return 0;
}

