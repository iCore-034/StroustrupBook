/*
Programm asks how much money do you have and count the denomination of them.
*/
#include <iostream>    		//
#include <string>		// or use #include "std_lib_facilities.h"
using namespace std;		// 


int main() {
	again:
	
											 // Ask five question about different denomination of coins( cents).
	
	const int questions = 5;
	string how_many[questions] = {"How many 1-cent coins do you have? ", "And 5-cent coins? ",
	"10-cent coins? ", "How many 25-cent coins have you got? ", "So, maybe 50-cents coins? " };
	const int count_of_value = 5;
	int a = 1;
	int value[count_of_value] = { a*1, a*5, a*10, a*25, a*50};
	int coins = 0;
	int sum_cents = 0;
	int sum_coins = 0;
	
		for (int i = 0; i <= 4; i++) {
			cout << how_many[i];
			cin >> coins;
			sum_cents += coins * value[i];         
			sum_coins += coins;
											 // We'll get sum of cents and sum of coins in the end.
											 // If we have three 5-cent coins programm will know it's 15 cents.
		}
		
		int dollars = sum_cents / 100;		 // One dollar is 100 cents 
		int remainder = sum_cents % 100;	 // In case if a remainder of the division on 100 != 0. We need to know how many cents left.
		int a_c = 0;						 // This variable for cases if we have one coin of 10 or 50 cents. Programm will write instead of "0.10 dollar" "0.1 dollar"
		
		
		if (sum_coins > 1 && sum_cents > 1) {
			cout << "You have " << sum_coins << " coins in denominations of " << sum_cents << " cents\n";
			
			// Ex: 3 coins of 50-cents = 1 dollar and 50 cents.
			if (remainder != 0)
				cout << "So, you have " << dollars << " dollars and " << remainder << " cents\n";
			
			// Ex: 2 coins of 50 cents = 1 dollar.
			else
				cout << "So, you have " << dollars << " dollars\n";
		}
		else if (sum_coins == 1 && sum_cents > 1) {
			cout << "You have one coin in denominations of " << sum_cents << " cents\n";
			
			// One coin of 10 or 50 cents.
			if (remainder >= 10 && remainder != 25){
				a_c = remainder / 10;
				cout << "So, you have 0." << a_c << " dollar\n";
			}
			// For 25 cents.
			else if (remainder == 25)
				cout << "So, you have 0." << remainder << " dollar\n";
			// For one coin of 5 cents.
			else
				cout << "So, you have 0.0" << remainder << " dollar\n";
		}
		// For one coin of one cent.
		else if (sum_coins == 1 && sum_cents == 1)
			cout << "You have one cent.\n";
		// If you always enter 0.
		else
			cout << "You've no money? Find a job at last.\n";
		
		// I saved this operator for testing different cases.
		// It brings us back to the beginning of the program.
	goto again; 
	
	getchar();
	return 0;
}







