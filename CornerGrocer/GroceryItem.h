#ifndef GROCERYITEM_H
#define GROCERYITME_H
#include <iostream>

// Represents a single GroceryItem
class GroceryItem {
public:
	// Default constructor
	GroceryItem();

	// Constructs a GorceryItem with the given name
	GroceryItem(std::string t_name);

	// Increases the purhcase frequency of the item
	void incrementFrequency();

	// Returns the name of the item
	std::string getName() const;

	// Returns the frequency of the item
	int getFrequency() const;

	// Prints the frequncy of the item
	void printFrequency() const;

	// Prints the histogram of the item
	void printHistogram() const;

private:
	// GroceryItem name
	std::string m_name;
	// GroceryItem frequency purchased
	int m_frequency;
};

#endif