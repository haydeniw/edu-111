// group3_example.cpp
// Hayden Wolff
// Group 3: Get the second number to add.
// Input: None.
// Output: The second number to be added.


#include <iostream>
using namespace std;

int get_num2();

int main() {

	cout << get_num2() << endl;

}

int get_num2() {
	int num2;
	cout << "Please enter the second number to be added: ";
	cin >> num2;
	return num2;
}