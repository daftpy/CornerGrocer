#include "GroceryManager.h"

GroceryManager::GroceryManager() {}

void GroceryManager::readFromFile(const std::string& t_filename) {
	// Create the file stream with the file
	std::ifstream file(t_filename);

	// If the file cannot be opened, return
	if (!file) {
		std::cout << "Cannot open input file." << std::endl;
		return;
	}

	// Create the variable and read the words in from the file
	std::string word;
	while (file >> word) {
		// Check the item map for the word, if it doesn't exist
		if (m_itemMap.count(word) == 0) {
			// Create the item
			m_itemMap[word] = GroceryItem(word);
		}
		// Increment the freq
		m_itemMap[word].incrementFrequency();
	}
}

void GroceryManager::menuOptionOne() {
	// Prompt the user for the requested item
	std::cout << "Enter the item you wish to look for: ";

	// Create the variables and capture the input
	std::string item;
	std::cin >> item;

	// Sanitize the input to match the form of the data
	item = sanitizeString(item);

	// Check if the item exists in the item map
	if (m_itemMap.count(item) > 0) {
		// if it exists, print the frequency
		std::cout << "\nSelected items frequency: " << std::endl;
		m_itemMap[item].printFrequency();
	}
	// else, tell the user no data exists
	else {
		std::cout << "\nNo data for the item requested exists." << std::endl;
	}
}

void GroceryManager::menuOptionTwo() {
	std::cout << "\nAll items and their frequencies: " << std::endl;
	// iterate through the itemMap
	for (const auto& item : m_itemMap) {
		// get the value from the key,value pair
		item.second.printFrequency();
	}
}

void GroceryManager::menuOptionThree() {
	std::cout << "\nHistogram of all items: " << std::endl;
	// iterate through the itemMap
	for (const auto& item : m_itemMap) {
		// get the histogram for the key,value pair
		item.second.printHistogram();
	}
}

std::string GroceryManager::sanitizeString(std::string t_str) {
	// Grab the first char
	char firstChar = t_str[0];
	// Uppercase it to match the form of the data
	firstChar = toupper(firstChar);
	// Save the string and return it
	t_str[0] = firstChar;
	return t_str;
}

void GroceryManager::createBackup() {
	// Create and open the file
	std::ofstream file("frequncy.dat");

	// If the file cannot be opened, print an error message
	if (!file) {
		std::cout << "Cannot open the backup file." << std::endl;
		return;
	}

	// Iterate through the item map
	for (const auto& item : m_itemMap) {
		file << item.first << " " << item.second.getFrequency() << std::endl;
	}

	// Close the file
	file.close();
}
