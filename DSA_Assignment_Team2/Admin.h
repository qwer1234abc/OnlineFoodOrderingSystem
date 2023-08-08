#pragma once
#include <iostream>
#include <string>
#include "Order.h"
using namespace std;

class Admin
{
private:
	int adminID;
	string name;
	string loginID;
	string password;
	int restaurantID;
public:
	Admin();
	Admin(int id, const string& n, const string& l, const string& p, int r);

	int getAdminID() const;
	string getName() const;
	string getLoginID() const;
	string getPassword() const;
	int getRestaurantID() const;
	
	HashTable<string, Admin> getAllAdmins(const string& filename);
	bool adminLogin(HashTable<string, Admin>& adminTable, const string& filename);
	void displayAdminMenu();
	void adminLoginMenu(Admin& admin, HashTable<string, Admin>& adminTable, Queue<Order>& orderQueue);
	void displayIncomingOrder(Queue<Order>& restaurantOrdersQueue);

	void clearScreen() {
		cout << "\033[2J\033[1;1H";
	}

	void waitForEnterKey() {
		cout << "Press Enter to continue...";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin.get();
	}
};

