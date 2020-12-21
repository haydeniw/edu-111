// group5_example.cpp
// Hayden Wolff
// Group 5: Inform the user of the result.
// Input: User first name, result of adding numbers.
// Output: None.


#include <iostream>
using namespace std;

void inform_user(string name, int result);

int main() {
	string name = "Name";
	int result = 5;
	inform_user(name, result);
}

void inform_user(string name, int result) {
	cout << "Hi, " << name << " the result is: " << result << endl;
}