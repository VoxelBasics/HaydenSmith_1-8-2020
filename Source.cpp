//Hayden Smith
//In Class Exercise 1/8/2020

#include <iostream>
using namespace std;

int main() {

	// Exercise 1
	cout << "Exercise 1:" << endl;
	double pounds;
	cout << "Enter a number of pounds." << endl;
	cin >> pounds;
	cout << pounds << " lbs is " << pounds * 0.454 << " kgs." << endl << endl;

	// Exercise 2
	cout << "Exercise 2:" << endl;
	double len;
	cout << "Enter a side length for a hexagon." << endl;
	cin >> len;
	cout << "A hexagon with side length " << len << " inches has an area of " << (3 * sqrt(3) / 2) * len * len << " inches squared." << endl << endl;

	//Exercise 3
	cout << "Exercise 3:" << endl;
	int int1;
	int int2;
	cout << "Enter an integer." << endl;
	cin >> int1;
	cout << "Enter another integer." << endl;
	cin >> int2;
	if (int1 > int2) 
	{
		cout << "The larger integer is " << int1 << "." << endl << endl;
	}
	else 
	{
		cout << "The larger integer is " << int2 << "." << endl << endl;
	}

	return 0;
}