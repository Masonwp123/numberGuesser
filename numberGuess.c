#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
	srand(time(NULL));
	char name[20];
	printf("Hi, what is your name? ");
	scanf("%s", name);
	printf("Nice to met you %s. Lets have some fun!\n", name);
	int random = rand() % 100 + 1;
	int guesses = 0;
	bool bKeepGoing = true;
	while (bKeepGoing) {
		guesses++;
		printf("turn %d)\nEnter a guess between 1 and 100: ", guesses);
		int guessedNumber = 0;
		scanf("%d", &guessedNumber);
		if (guessedNumber > random) {
			printf("too high!\n");
			continue;
		}
		if (guessedNumber < random) {
			printf("too low!\n");
			continue;
		}
		printf("You Got It!\n");
		bKeepGoing = false;
	}
	if (guesses < 7) {
		printf("Great Job!\n");
		return 0;
	}
	if (guesses == 7) {
		printf("You did okay.\n");
		return 0;
	}
	printf("You can do better.\n");
	return 0;
}
