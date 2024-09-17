#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));
    

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_guesses =0;
    int guessed_number;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", random_number);
    do
    {
        printf("Guess the number :");
        scanf("\n%d",& guessed_number);
        if(guessed_number>random_number){
            printf("\nLower number please!\n");
        }
        else if(guessed_number<random_number){
            printf("\nHigher number please!\n");           
        }else {
            printf("Congrats!\n");
        }
        no_of_guesses++;
    } while (guessed_number!=random_number);
    printf("You guessed the number in %d guess",no_of_guesses);
    

    return 0;
}
