#include <iostream>
#include "Customer.h"
#include "Admin.h"
#include "LinkedList.h"
// test

using namespace std;


void displayMainMenu();

void clearScreen() {
	cout << "\033[2J\033[1;1H";
}

void waitForEnterKey() {
	cout << "Press Enter to continue...";
	cin.ignore(); // Ignore any leftover newline characters in the input buffer
	cin.get();    // Wait for the user to press Enter before continuing
}

int main()
{
	string selectedOptionStr;

	do {
		displayMainMenu();
		cin >> selectedOptionStr;

		if (selectedOptionStr == "1") {
			Customer customer;
			customer.customerLoginMenu(customer);
		}
		else if (selectedOptionStr == "2") {
			Customer customer;
			customer.customerRegisterMenu(customer);
		}
		else if (selectedOptionStr == "3") {
			cout << "\n-------------------------" << endl;
			cout << "       Admin Login        " << endl;
			cout << "-------------------------" << endl;
			Admin admin;

			admin.adminLogin("Admins.csv");
		}
		else if (selectedOptionStr == "4") {
			cout << "\nThank you for using our app. Goodbye!" << endl;
		}
		else {
			cout << "\nInvalid option. Please try again." << endl;
		}
		waitForEnterKey();

	} while (selectedOptionStr != "4");
}

void displayMainMenu() {
	clearScreen();
	cout << "==================================" << endl;
	cout << "        WELCOME TO OUR APP        " << endl;
	cout << "==================================" << endl;
	cout << "1. Customer Login" << endl;
	cout << "2. Customer Register" << endl;
	cout << "3. Admin Login" << endl;
	cout << "4. Exit" << endl;
	cout << "==================================" << endl;
	cout << "Enter your choice: ";
}
