// Simple calculator with the ability to write strings-operands;
#include<iostream>
#include<vector>
using namespace std;

void foo(char x, double y, double z) {
	if (x == '+') {
		cout << "The sum of " << y << " and " << z << " == " << y + z << endl;
	}
	else if (x == '-') {
		cout << "The difference between " << y << " and " << z << " == " << y - z << endl;
	}
	else if (x == '*') {
		cout << "The multiplication of " << y << " and " << z << " == " << y * z << endl;
	}
	else if (x == '/') {
		cout << "The dividing " << y << " by " << z << " == " << y / z << endl;
	}
	else {
		cout << "I don't understant.\n Try again.\n";
	}
}
int main() {
	cout << "How do you want to write? Numbers or strings?\n";
	vector<string> choose;
	string in_choose;
	cin >> in_choose;
	choose.push_back(in_choose);
	if (choose[0] == "numbers") {
		cout << "Enter two number and symbol of operation (2.3 + 9.3): \n";
		double first = 0;
		double second = 0;
		char symbol;
		cin >> first >> symbol >> second;
		foo(symbol, first, second);
	}
	else if (choose[0] == "strings") {
		string upp_to_int;
		string upp_to_int_2;
		char symbol_2;
		vector<string> uppercase = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
		cout << "Enter two number and symbol of operation (one + two): \n";
		cin >> upp_to_int;
		cin >> symbol_2;
		cin >> upp_to_int_2;
		double first_str_to_dbl = 0;
		double second_str_to_dbl = 0;
		for (int i = 0; i < uppercase.size(); i++) {
			if (upp_to_int == uppercase[i]) {
				first_str_to_dbl = i;
			}
			else if (upp_to_int_2 == uppercase[i]) {
				second_str_to_dbl = i;
			}
		}
		foo(symbol_2, first_str_to_dbl, second_str_to_dbl);
	}
	else {
		cout << "You made a mistake!\n";
	}
	getchar();
	return 0;
}