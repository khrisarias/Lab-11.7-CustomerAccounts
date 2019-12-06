//Lab 11.7 Customer Accounts
/**
 *
 * TODO: Standard Header
 * Name: Khristian Arias
 * Date: 11/30/19
 * Program summary
 **/

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

/**
 * Data Definitions
 * TODO: Write definitions for any data here
 * //struct Customer {
	// string name;
	// int address_num;
	// string address_info;
	// int telephone_num;
	// float account_bal;
	// string last_pay;
 * }
 **/

 /**
  * Function Declarations
  * TODO: Inert your function declarations, purpose statements, I/O comments here.
  
  //Purpose Statement: Store and display data entered for a customer account.

  // Inputs
  // struct Customer: Structure that will associated with inputs
  // string name: Name of the account owner
  // int address_num: Digits that come before the city addess
  // string address_info: Entered city, state, and zipcode of address
  // int telephone_num: Given phone number for the account
  // float account_bal: Total amount of currency in account
  // string last_pay: Date of previously received payment to account
  // Output
  // The information that is entered by the user

  // Function Declaration: class Customer (string name, int address_num, 
     string address_info, int telephone_num, float account_bal, string last_pay)
  /**
   * Declarations for given functions. Don't touch.
   **/
void test();
void run();


/**
 * Main Function
 * Don't touch this! use `run()` instead
 **/
int main() {
	char t;
	cout << "Enter [t] to test, or any other character to run." << endl;
	cin >> t;
	if (t == 't') {
		test();
	}
	else {
		run();
	}
}

/**
 * Function Definitions
 *  Call a test function for each of your functions
 **/
void test() 
{
	class Customer(vector<int>, int address_num, int telephone_num, float account_bal)
		address_num... telephone_num ... account_bal ... v[i]
		int i = address_num, telephone_num, account_bal;
}

// Use this in place of a main function
void run()
{
	cout << "Please enter customer name: ";
	cin >> Customer.name;

	cout << "Please enter address number: ";
	cin >> Customer.address_num;

	cout << "Please enter rest of address information: ";
	cin >> Customer.address_info;

	cout << "Please enter the telephone number: ";
	cin >> Customer.telephone_num;

	cout << "Please enter the account balance: ";
	cin >> Customer.account_bal;

	cout << "Please enter the date of last payment: ";
	cin >> Customer.last_pay;

	cout << "\\\\\nCustomer Account\\\\\n" << endl;
	cout << "Name: " << Customer.name << endl;
	cout << "Address: " << Customer.address_num << " " << Customer.address_info << endl;
	cout << "Telephone number: " << Customer.telephone_num << endl;
	cout << "Balance: " << Customer.account_bal << endl;
	cout << "Date of Last Payment: " << Customer.last_pay << endl;
}

/**
 * TODO: Insert your function definitions and unit test function definitions here.
 **/

// Asserts
// Jose Sanchez, 34, Torrance CA 90455, 5456537822, 432.47, March 3 ----->
// "Name: Jose Sanchez, Address: 34 Torrance, CA 90455, Telephone: 5456537822,
// Account Balance: 432.47, Last Payment: March 3"
// Barry, 4034, AAAh RE 404, 811, 57, February 10th ------>
// "Name: Barry, Address: 4034 AAAh, RE 404, Telephone: 811,
// Account Balance: 57, Last Payment: February 10th"

// Pseudocode
// *Ask for account information
// **Get customer name
// **Get customer address
// **Get customer telephone number
// **Get account balance and date of previous payment
// *Display the given customer account information
// **Show given name
// **Show given address
// **Show given telephone number
// **Show the account balance and payment date