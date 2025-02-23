



    #include <stdio.h>

int main() {
    int inchs,feet;

    // Prompt user for input
    printf("Enter number of inches: ");
    scanf("%d", &inchs);

    // Calculate inchs,feet
    feet = inchs / 12;
    inchs %= 12;


    // Display the result
    printf("The inches in feet format is: %2d%d\n", inchs,feet);

    return 0;
}








