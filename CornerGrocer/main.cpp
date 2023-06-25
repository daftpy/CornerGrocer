/*
* Corner Grocer
*
* Date: 06/18/2023
*
* Author: Alexander Flood
*/


#include <iostream>
#include <string>
#include "GroceryManager.h"

int getValidInput() {
	std::cout << "\nSelect a menu option: ";
	// Set the variable and get user input
	int choice;
	std::cin >> choice;

	// While the input is not a number, or is a number less than 1 or greater than 4
	// Prompt the user about their error and ask for new input
	while (std::cin.fail() || choice < 1 || choice > 4) {
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
		std::cout << "\nSelect a menu option: ";
		std::cin >> choice;
	}
	return choice;
}

void displayMenu() {
	// Print the menu title and header
	std::cout << "Corner Grocer" << std::endl << std::string(25, '-') << std::endl;
	std::cout << "1. Display Frequency for a Specific Item" << std::endl;
	std::cout << "2. Display a List of All and Their Frequencies" << std::endl;
	std::cout << "3. Display a Histogram of All Items" << std::endl;
	std::cout << "4. Exit Program" << std::endl;
}

int main(int argc, char* argv[]) {
	// Create the GroceryManager object
	GroceryManager groceryManager;

	// Read in the data from the file
	groceryManager.readFromFile("sales.txt");
	groceryManager.createBackup();


	while (true) {
		displayMenu();
		// Get input, make sure its valid
		int choice = getValidInput();

		switch (choice) {
		case 1:
			// Return the frequency for a specific item
			groceryManager.menuOptionOne();
			break;
		case 2:
			// Print the frequency for all items
			groceryManager.menuOptionTwo();
			break;
		case 3:
			// Print all items and their histograms
			groceryManager.menuOptionThree();
			break;
		case 4:
			// If case 4, exit the program
			return 0;
		}
		std::cout << "\n\n\n";
	}
}