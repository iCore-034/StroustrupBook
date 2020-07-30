// Simple calculator
#include<iostream>
#include<vector>
using namespace std;
// I decided to write down the function to practice
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
	cout << "Enter two number and symbol of operation (2.3 + 9.3): \n";
	double first = 0;
	double second = 0;
	char symbol;
	cin >> first >> symbol >> second;
	foo(symbol, first, second);
	
	getchar();
	return 0;
}