/*
Name: Vincent Melvin Kimanthi
Reg: PA106/G/29386/25
Declaration: A number guessing game
*/

#include <stdio.h>

int main() {
    int secret_number;
    int guess;
    int attempt = 0;   

    // The description
    printf("THIS IS A NUMBER GUESSING GAME\n");

    // Prompt the owner of the game to enter the secret number
    // (This secret number should not be shown to the player)
    printf("Enter your secret number: ");
    scanf("%d", &secret_number);  

    // Prompt the player of the game to guess the secret number
    do {
    	printf("Enter a number ranging from 1 to 20 as your guess \n");
        printf("Enter your guess: ");
        scanf("%d", &guess);     
        attempt++;

        if (guess > secret_number) {
        	printf("Please Try again!\n");
            printf("Your guess is too high!\n");
        } else if (guess < secret_number) {
        	printf("Please Try again!\n");
            printf("Your guess is too low!\n");
        } else {
            printf("Congratulations! You have guessed the secret number!\n");
        }

    } while (guess != secret_number);

    return 0;
}
