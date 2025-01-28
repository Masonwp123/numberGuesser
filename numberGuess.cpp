#include <iostream>
#include <random>

int main() {
	
	//ask for name and print greeting
	std::string name;
	std::cout << "Hi, what is your name? " << std::endl;
	
	//clear input buffer
	std::cin.clear();
	//get name
	std::getline(std::cin, name);
	std::cout << "Nice to meet you " << name << ". Lets have some fun!" << std::endl;
	
	//generate random number between 1 and 100
	std::random_device rd;
	std::uniform_int_distribution<int> dist(1, 100);
	int random = dist(rd);

	int guesses = 0;
	bool bKeepGoing = true;
	while (bKeepGoing) {

		// increment the amount of guesses
		guesses++;
		std::cout << "turn " << guesses << ")" << std::endl;
		std::cout << "Enter a guess between 1 and 100: ";
		
		//ask for a guess
		int guessedNumber = 0;
		std::cin.clear();
		std::cin.ignore();
		std::cin >> guessedNumber;

		//if number is too high, guess again
		if (guessedNumber > random) {
			std::cout << guessedNumber << " is too high!" << std::endl;
			continue;
		}

		//if number is too low, guess again
		if (guessedNumber < random) {
			std::cout << guessedNumber << " is too low!" << std::endl;
			continue;
		}

		//number is correct, stop the loop
		std::cout << "You Got It!" << std::endl;
		bKeepGoing = false;
	}
	//if below 7 guesses, player did better than expected
	if (guesses < 7) {
		std::cout << "Great Job!" << std::endl;
		return 0;
	}
	//if at 7 guesses, player did average
	if (guesses == 7) {
		std::cout << "You did okay." << std::endl;
		return 0;
	}
	//if above 7 guesses, player did worse than expected
	std::cout << "You can do better." << std::endl;
	return 0;
}
