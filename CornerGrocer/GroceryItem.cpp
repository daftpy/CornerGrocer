#include "GroceryItem.h"

// Default constructor
GroceryItem::GroceryItem() : m_name(""), m_frequency(0) {}

// Overloaded constructor for GroceryItem, sets the name to the provided string and frequency to 0
GroceryItem::GroceryItem(std::string t_name) : m_name(t_name), m_frequency(0) {};

// Increment the frequency property
void GroceryItem::incrementFrequency() {
	++m_frequency;
}

// Return the GroceryItem name
std::string GroceryItem::getName() const {
	return m_name;
}

// Return the GroceryItem frequency
int GroceryItem::getFrequency() const {
	return m_frequency;
}

// Print the GroceryItem name and frequency
void GroceryItem::printFrequency() const {
	std::cout << m_name << " " << m_frequency << std::endl;
}

// Print the GroceryItem name and histogram
void GroceryItem::printHistogram() const {
	std::cout << m_name << " ";
	for (int i = 0; i < m_frequency; ++i) {
		std::cout << "*";
	}
	std::cout << "\n";
}
