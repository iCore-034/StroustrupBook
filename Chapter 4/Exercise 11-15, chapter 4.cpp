// Define prime number from 1 to 100 inclusively
#include<iostream>
#include <vector>
using namespace std;

int division(int x) {
	for (int i = 0; i < 100; i++)
	{
		if (x % 2 == 0 || x % 3 == 0 || x % 5 == 0 || x == 1) {
			if (x == 2 || x == 3 || x == 5) {
				return x;
			}
			return 999; // This is a crutch, I don't know how to change it
		}
		else {
			return x;
		}
	}
}
int main() {
	vector<int>prime_numbers;
	cout << "I'll search for you prime numbers until(Enter integer): " << endl;
	int max = 0;
	cin >> max;
	for (int i = 1; i <= max; i++) {
		if (division(i) != 999) {
			prime_numbers.push_back(division(i));
		}
	}
	/*
	For ex 11 and 14
	for (int i = 0; i < prime_number.size(); i++){
		cout << prime_number[i]<< " ";
	}*/
	
	//For ex 15
	cout << "How many prime numbers do you want to see? \n";
	int how_namy_primes = 0;
	cin >> how_namy_primes;
	if (how_namy_primes > prime_numbers.size()) {
		cout << "I can't show you prime numbers more I searched.\n";
	}
	else {
		cout << "First " << how_namy_primes << " prime numbers:\n";
		for (int i = 0; i < how_namy_primes; i++)
		{
			cout << prime_numbers[i]<< " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}