#include <stdio.h>

int main(){

    int secretNumber = 5;
    int guess;
    int guessRemaining = 3;
    
    while(guess != secretNumber && guessRemaining > 0){
        printf("Enter your guess: \n");
        scanf("%d", &guess);

        if(guess != secretNumber){
            printf("Wrong Guess! %d guesses left to try.\n", guessRemaining - 1);
            guessRemaining--;

        }
    }
    if(guessRemaining == 0){
        printf("You Lost!\n");
    } else if(guess == secretNumber){
        printf("Congratulations! You guessed it correct.\n");
    }
    
    return 0;
}