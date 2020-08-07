// Rock-paper-scissors with machine!!
#include<iostream>
#include <ctime>
#include <vector>
using namespace std;

int foo(char x[]) {
	int result_player = 0;
	if (strcmp(x, "rock") == 0) {
		result_player = 0;
	}
	else if (strcmp(x, "paper") == 0) {
		result_player = 1;
	}
	else if (strcmp(x, "scissors") == 0) {
		result_player = 2;
	}
	else {
		cout << "What!? Don't understand.\n";
		result_player = 3;
	}
	return result_player;
}
int main() {
	srand(time(NULL));
	// rock == 0; paper == 1; scissors == 2;
	cout << "Please, enter rock, paper or scissors:\n";
	char choose[10];
	cin >> choose;
	int player_1 = foo(choose); //player_1 is user
	switch (player_1) {
		case 3:
			break;
		default:
		int player_2 = rand() % 3;
		string computer_random;
		switch (player_2) { // I wanted to program write what it choosed
		case 0: 
			computer_random = "rock";
			break;
		case 1:
			computer_random = "paper";
			break;
		case 2:
			computer_random = "scissors";
			break;
		}
		cout << "Your opponent choosed " << computer_random << ".\n";
		// The result of game
		switch (player_2) {
			case 0:
				switch (player_1) {
					case 0:
						cout << "It's a tie.\n";
						break;
					case 1:
						cout << "You won!\n";
						break;
					case 2:
						cout << "You lose :(\n";
						break;
				}
			case 1:
				switch (player_1) {
				case 0:
					cout << "You lose :(\n";
					break;
				case 1:
					cout << "It's a tie.\n";
					break;
				case 2:
					cout << "You won!\n";
					break;
				}
			case 2:
				switch (player_1) {
				case 0:
					cout << "You won!\n";
					break;
				case 1:
					cout << "You lose :(\n";
					break;
				case 2:
					cout << "It's a tie.\n";
					break;
				}
		}
		break;
	}
	system("pause");
	return 0;
}