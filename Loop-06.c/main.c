//06
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numberToGuess, maxTries, guess;

    printf("Player-1, enter the number to be guessed: ");
    scanf("%d", &numberToGuess);

    //  N tries
    printf("Player-2, enter the maximum number of tries: ");
    scanf("%d", &maxTries);


    int attemptsLeft = maxTries;


    while (attemptsLeft > 0) {

        printf("Player-2, enter your guess: ");
        scanf("%d", &guess);


        if (guess == numberToGuess) {
            printf("Right, Player-2 wins!\n");
            break;
        } else {
            // Incorrect guess
            attemptsLeft--;
            printf("Wrong, %d Choice(s) Left!\n", attemptsLeft);

            // Check if no more attempts left
            if (attemptsLeft == 0) {
                printf("Player-1 wins!\n");
            }
        }
    }

    return 0;
}
