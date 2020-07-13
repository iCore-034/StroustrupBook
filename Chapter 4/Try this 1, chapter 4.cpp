#include <iostream>
#include <string>
#include <cmath>
using namespace std;
	
int main() {
	// transfer different currency to USD  2020.07.10;
	cout << "Enter your currency(char)('r'(RUB), 'u'(UAH), 'c'(CNY), 'e'(EUR), 'j'(JOD)):\n";
	char currency = ' ';
	cin >> currency;

	cout << "Please, enter value: \n";
	double value = 0;
	cin >> value;
	
		double transfer = 0;
		
		// don't forget about quotes {}, colon after case and break operator;
		switch (currency) {
		case 'r':
			transfer = abs(value * 0.014); // I used abs() because user could make a mistake by accident
			cout << value << " RUB is " << transfer << " USD\n";
			break;
		case 'u':
			transfer = abs(value * 0.037);
			cout << value << " UAH is " << transfer << " USD\n";
			break;
		case 'c':
			transfer = abs(value * 0.14);
			cout << value << " CYN is " << transfer << " USD\n";
			break;
		case 'e':
			transfer = abs(value * 1.13);
			cout << value << " EUR is " << transfer << " USD\n";
			break;
		case 'j':
			transfer = abs(value * 1.41);
			cout << value << " JOD is " << transfer << " USD\n";
			break;
		default:
			cout << "I don't understand you.";
			break;
		} 

	/*
	I tried to found how to compare strings because I wanted to user input "eur" or "cyn" instead 'e', 'c'  etc.
	char a[4];
	cin >> a;
	if (strcmp(a, "rub") == 0)
		cout << "\nRUB";
	else if (strcmp(a, "eur") == 0)
		cout << "\nEUR";
	else
		cout << "IDN";
	*/					
	return 0; 
}
