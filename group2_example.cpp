// group2_example.cpp
// Hayden Wolff
// Group 2: Get the first number to add.
// Input: None.
// Output: The first number to be added.


#include <iostream>
using namespace std;

int get_num1();

int main() {

	cout << get_num1() << endl;

}

int get_num1() {
	int num1;
	cout << "Please enter the first number to be added: ";
	cin >> num1;
	return num1;
}