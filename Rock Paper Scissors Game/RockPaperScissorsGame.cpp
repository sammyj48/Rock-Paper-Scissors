#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include <conio.h>
enum Choice {
	rock,
	paper,
	scissors
};

int main() {
	bool requestRestart = false;
	do {
		std::ostream& cout = std::cout;
		std::istream& cin = std::cin;
		Choice userChoice, cpuChoice;
		int intChoice;
		cout << "This is a fun 'Rock Paper Scissors' game for you to try!!!!\n";

		cout << "\nPlease enter 1 to choose rock, 2 for paper or 3 for scissors!!!\n";

		std::cout << '\n';

		cin >> intChoice;

		std::cout << '\n';

		userChoice = (Choice)intChoice;

		// Seed the random number generator
		srand(time(0));

		// Define the range
		int lowerBound = 1; // lower bound of the range
		int upperBound = 3; // upper bound of the range

		// Generate a random number within the range
		int randomNumber = lowerBound + rand() % (upperBound - lowerBound + 1);

		// Print the random number
		std::cout << "Computer's choice is ....... drum roll please....." << randomNumber << "!!!!" << std::endl;

		if (randomNumber == intChoice)
			std::cout << "\nIt's a draw!!!! Nearly did it! Try again!\n";

		else if (randomNumber == 1 && intChoice == 2)
			std::cout << "Paper wraps rock!  Your luck is in, have another go!!";

		else if (randomNumber == 1 && intChoice == 3)
			std::cout << "Rock blunts the scissors!  Uh oh, you lose!  Try again!";

		else if (randomNumber == 2 && intChoice == 1)
			std::cout << "Paper wraps rock!  You've lost this time but don't despair!  Give it another whirl!!";

		else if (randomNumber == 2 && intChoice == 3)
			std::cout << "Scissors chop, chop, chop the paper!! What a snipping success!  Have another go!";

		else if (randomNumber == 3 && intChoice == 1)
			std::cout << "Rock blunts the scissors!  You've won!  Have another go superhero!!!";

		else if (randomNumber == 3 && intChoice == 2)
			std::cout << "Scissors chop, chop, chop the paper!! You lose! Better luck next time... try again!!";
		cout << "\n\nPress A to retry, or E to exit: ";
	
		while (true) {
			if (_kbhit()) {
				char keyHit = _getch();
				if (keyHit == 'E' || keyHit == 'e') {
					cout << keyHit << "\n\n";
					requestRestart = false;
					break;
				}
				else if (keyHit == 'A' || keyHit == 'a') {
					cout << keyHit << "\n\n";
					requestRestart = true;
					break;
				}
			}
		}
		
	} while (requestRestart);
	return 0;
} 
	