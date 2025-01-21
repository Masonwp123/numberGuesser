#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
	
	//set seed to current time
	srand(time(NULL));
	
	//ask for name and print greeting
	char name[20];
	printf("Hi, what is your name? ");
	scanf("%s", name);
	printf("Nice to met you %s. Lets have some fun!\n", name);
	
	//generate random number between 1 and 100
	int random = rand() % 100 + 1;

	int guesses = 0;
	bool bKeepGoing = true;
	while (bKeepGoing) {

		// increment the amount of guesses
		guesses++;
		printf("turn %d)\nEnter a guess between 1 and 100: ", guesses);
		
		//ask for a guess
		int guessedNumber = 0;
		scanf("%d", &guessedNumber);

		//if number is too high, guess again
		if (guessedNumber > random) {
			printf("too high!\n");
			continue;
		}

		//if number is too low, guess again
		if (guessedNumber < random) {
			printf("too low!\n");
			continue;
		}

		//number is correct, stop the loop
		printf("You Got It!\n");
		bKeepGoing = false;
	}
	//if below 7 guesses, player did better than expected
	if (guesses < 7) {
		printf("Great Job!\n");
		return 0;
	}
	//if at 7 guesses, player did average
	if (guesses == 7) {
		printf("You did okay.\n");
		return 0;
	}
	//if above 7 guesses, player did worse than expected
	printf("You can do better.\n");
	return 0;
}
