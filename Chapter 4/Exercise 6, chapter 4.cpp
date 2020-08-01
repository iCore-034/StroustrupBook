#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<string> uppercase = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	//This part defines words;
	cout << "Input the number from 0 to 9 inclusively: \n";
	int number = 0;
	cin >> number;
	for (int i = 0; i < uppercase.size(); i++) {
		if (i == number) {
			cout << number << " is " << uppercase[i] << endl;
		}	
	}
	// This part defines integers;
	vector<string> user_number;
	string random_string;
	cout << "Enter the word(from zero to nine):\n";
	cin >> random_string;
	user_number.push_back(random_string);
	for (int i = 0; i < uppercase.size(); i++) {
		if (uppercase[i] == user_number[0]) {
			cout << user_number[0] << " is " << i << endl;
		}
	}
	getchar();
	return 0;
}