// group4_example.cpp
// Hayden Wolff
// Group 4: Add the two numbers.
// Input: 2 numbers
// Output: The result of adding the two numbers together.


#include <iostream>
using namespace std;

int add_nums(int num1, int num2);

int main() {
	int num1 = 1;
	int num2 = 3;
	cout << add_nums(num1, num2) << endl;
}

int add_nums(int num1, int num2) {
	return num1 + num2;
}