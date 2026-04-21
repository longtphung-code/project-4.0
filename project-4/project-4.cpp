#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int choice;
		double radius, length, width, base, height;
	const double PI = 3.14159;

	// Display menu
	cout << "Geometry Calculator \n";
	cout << "1. Calculate the Area of a Circle \n";
	cout << "2. Calculate the Area of a Rectangle \n";
	cout << "3. Calculate the Area of a Triangle \n";
	cout << "4. Quit \n";
	cout << "Enter your choice (1-4): ";
	cin >> choice;


	//Process user choice
	if (choice < 1 || choice > 4) {
		cout << "Invalid choice. Please choose 1-4." << endl;
		return 0; 
	}
	cout << fixed << setprecision(2);

	switch (choice) {
	case 1: // Circle
		cout << "Enter the radius of the circle: ";
		cin >> radius;

		if (radius < 0) {
			cout << "Radius cannot be negative." << endl;
			return 0;;
		}

		cout << "Area of the circle: " << PI * radius * radius << endl;
		break;

	case 2: // Rectangle
		cout << "Enter the length of the rectangle: ";
		cin >> length;
		cout << "Enter the width of the rectangle: ";
		cin >> width;

		if (length < 0 || width < 0) {
			cout << "Length and width cannot be negative." << endl;
			return 0;
		}
		cout << "Area of the rectangle: " << length * width << endl;
		break;

	case 3: // Triangle
		cout << "Enter the base of the triangle: ";
		cin >> base;
		cout << "Enter the height of the triangle: ";
		cin >> height;

		if (base < 0 || height < 0) {
			cout << "Base and height cannot be negative." << endl;
			return 0;
		}
		cout << "Area of the triangle: " << 0.5 * base * height << endl;
		break;

	case 4: // Quit
		cout << "Exiting the program. Goodbye!" << endl;
		break;
	}

	return 0;
}