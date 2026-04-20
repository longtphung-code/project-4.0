#include <iostream>
using namespace std;

int main() {
	int month, year;
	int days = 0;

	//Ask the user for the year
	cout << "Enter a month (1-12): ";
	cin >> month;

	//Input for month
	if (month < 1 || month >12) {
		cout << "Error: Invalid month. Please enter a value between 1 and 12." << endl;
		return 0;
	}

	cout << "Enter a year: ";
	cin >> year;
		
	// Determine if it's a leap year
	bool isLeapYear = false;

	if (year % 100 ==0) {
		if (year % 400 == 0) {
			isLeapYear = true;
		}
	} else if (year % 4 == 0) {
		isLeapYear = true;
	}

	// Determine the number of days in the month
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		days = 31;
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
		days = 30;
	} else if (month == 2) {
		if (isLeapYear) {
			days = 29;
		} else {
			days = 28;
		}
	}
	// Output the result 
	cout << "Number of days: " << days << endl;

	return 0;
}
