#ifndef GROCERYMANAGER_H
#define GROCERYMANAGER_H

#include <fstream>
#include <map>
#include <string>
#include <algorithm>

#include "GroceryItem.h"

// The GroceryManager class is responsible for handling all GroceryItem objects
class GroceryManager {
public:
	// Default constructor
	GroceryManager();

	// The readFromFile function reads a file and populates the item map with GroceryItem objects
	void readFromFile(const std::string& t_filename);

	// Menu option one asks for an item and returns its frequency
	void menuOptionOne();

	// Menu option two returns the frequency for all GroceryItem objects
	void menuOptionTwo();

	// Menu option three returns histograms for all GroceryItem objects
	void menuOptionThree();

	// Used to sanitize user input
	std::string sanitizeString(std::string t_str);

	// Create the backup frequency.dat file
	void createBackup();

private:
	// The map in which GroceryItem objects are stored
	std::map<std::string, GroceryItem> m_itemMap;
};

#endif // !GROCERYMANAGER_H