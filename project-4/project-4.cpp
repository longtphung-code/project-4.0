#include <iostream>
#include <cmath> // for ceiling
#include <iomanip> //for setprecision
using namespace std;


int main() {
	double weight, distance;
	double rate = 0.0;
	double totalCost;

	//Get user input for weight and distance
	cout << "Enter package weight (kg) : ";
	cin >> weight;

	cout << "Enter shipping distance (miles): ";
	cin >> distance;

	// Input validation
	if (weight <= 0 || distance > 3000) {
		cout << "Error: Distance must be between 10 and 3000 miles." << endl;
		return 0;
	}

	// Determine the rate based on weight
	if (weight <=2) {
		rate = 1.10;
	}else if (weight <= 6) {
		rate = 2.20;
	} else if (weight <= 10) {
		rate = 3.70;
	} else { // up to 20 kg)
		rate = 4.80;
	}

	// Calculate number of 500 mile segments
	int segments = ceil(distance / 500.0);

	//Calculate total cost
	totalCost = segments * rate;

	// Output results
	cout << fixed << setprecision(2); // Set precision for currency format
	cout << "Shiping cost: $" << totalCost << endl;

	return 0;
}