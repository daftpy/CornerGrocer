# Corner Grocer Application

## Project Summary

The Corner Grocer application is designed to parse an input file containing a list of grocery items and keep track of their occurrence frequency. It provides an interface for the user to interact with the data loaded in.
The user can ask about the frequency of a particular item, display the frequency of all items, or view a histogram representing the frequency of all items. The application also creates a backup of the accumulated data for every 
item paired with its frequency in the file `frequency.dat`.

The problem this application is solving is keeping track of the frequency of purchases for different grocery items. It allows quick and easy access to sales data, providing insights that can be used for inventory management, sales 
analysis, and other business needs.

## Strengths of the Implementation

One of the strong implementations in this program is the easy to use interface with input checking and sanitizaiton. This helps eliminate user error and provide consistent results. The usage of the STL map data structure enables quick 
storage and retrieval of items.

The program was developed with object-oriented principles in mind. It encapsulates the responsibilities of managing the grocery items and their frequencies into separate `GroceryItem` and `GroceryManager` classes, ensuring that each class 
has its own unique responsibilities.

## Possible Enhancements

While the current program is functional and meets the project requirements, there are a few potential areas of we can improve on:

- File Handling: Currently, the application reads from a hard-coded file name. We could allow the program to accept the file name as a command-line argument or user input, which would make the program more flexible.
- User Input Sanitization: The input checking and sanitization could be improved to deal with additional edge cases, such as leading or trailing whitespaces, and multiple word items.

## Maintaining Code Quality

The application was designed with maintainability, readability, and adaptability in mind:

- Code Structure: The application is divided into classes that separate responsibilities but work together. This makes the code easier to understand, maintain, and expand on.
- Function and Variable Naming: Function and variable names were chosen to be descriptive and clear, making the code more readable and self-explanatory.
- Commenting: Important sections of the code are accompanied by descriptive comments, providing a quick overview of what each part of the code does.
- Header Guards: To avoid potential issues with multiple inclusions of the same header file, traditional header guards were used.
