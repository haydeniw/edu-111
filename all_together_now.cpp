// all_together_now.cpp
// Hayden Wolff
// Puts all the groups' functions together!
// Look how readable it is :)


#include <iostream>
using namespace std;

string get_name();
int get_num1();
int get_num2();
int add_nums(int num1, int num2);
void inform_user(string name, int result);

int main() {
	string name = get_name();
	int num1 = get_num1();
	int num2 = get_num2();
	int result = add_nums(num1, num2);
	inform_user(name, result);
}


string get_name() {
	string first_name;
	cout << "Please enter your first name: ";
	cin >> first_name;
	return first_name;
}


int get_num1() {
	int num1;
	cout << "Please enter the first number to be added: ";
	cin >> num1;
	return num1;
}


int get_num2() {
	int num2;
	cout << "Please enter the second number to be added: ";
	cin >> num2;
	return num2;
}


int add_nums(int num1, int num2) {
	return num1 + num2;
}


void inform_user(string name, int result) {
	cout << "Hi, " << name << " the result is: " << result << endl;
}