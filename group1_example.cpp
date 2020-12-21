// group1_example.cpp
// Hayden Wolff
// Group 1: Get the name of the user.
// Input: None.
// Output: The first name of the user.


#include <iostream>
using namespace std;

string get_name();

int main() {

	cout << get_name() << endl;

}

string get_name() {
	string first_name;
	cout << "Please enter your first name: ";
	cin >> first_name;
	return first_name;
}