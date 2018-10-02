#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

void fruityTea () {
	int numChoices = 6;
	int randomIndex;
	std::string teaChoice;

	std::string fruityTea [numChoices] = { "Fruit Tea Sampler", "Cranberry Vanilla Wonderland", "Raspberry Zinger", "Sleepytime Peach", "Sleepytime Green Berry Pomegranate", "Caramel Apple Dream" };

	randomIndex = rand() % numChoices;

	teaChoice = fruityTea [randomIndex];

	std::cout << "You should have some " + teaChoice + "!";
}

void caffeineTea () {
	int numChoices = 2;
	int randomIndex;
	std::string teaChoice;

	std::string caffeineTea [numChoices] = { "Nutcracker Sweet", "Roastaroma" };

	randomIndex = rand() % numChoices;

	teaChoice = caffeineTea [randomIndex];

	std::cout << "You should have some " + teaChoice + "!";
}

void noCaffeineTea () {
	int numChoices = 13;
	int randomIndex;
	std::string teaChoice;

	std::string noCaffeineTea [numChoices] = { "Candy Cane Lane", "Madagascar Vanilla", "Honey Vanilla Chamomile", "Sleepytime Honey", "Emperor's Choice", "Vermont Maple Ginger", "Sleepytime", "Sleepytime Mint", "Mint Magic", "Sleepytime Vanilla", "Sweet Coconut Thai Chai", "Almond Sunset", "Fireside Vanilla Spice" };

	randomIndex = rand() % numChoices;

	teaChoice = noCaffeineTea [randomIndex];

	std::cout << "You should have some " + teaChoice + "!";
}

int main() {
	std::string fruity;
	std::string caffeine;

	srand (time(NULL));

	std::cout << "Hello, human. Are you feeling fruity today? (yes or no) ";
	std::cin >> fruity;

	if (fruity == "yes") {
		fruityTea ();
	} else {
		std::cout << "Would you like something with caffeine? (yes or no) ";
		std::cin >> caffeine;

		if (caffeine == "yes") {
			caffeineTea ();
		} else {
			noCaffeineTea ();
		}
	}

	return 0;
}