#include<iostream>
#include<vector>
#include<ctime>
using namespace std;

int main() {
	//Part 1. GLOBAL CYCLE of trying
	vector<int> numbers = { 0 , 0 , 0 , 0 };
	vector<int> guess = { 0, 0 , 0 , 0 };
	do
	{
		// Part 1.1 Randomize numbers.
		int random = 0;
		cout << "Input random number: " << endl;
		cin >> random;
		if (!cin >> random) {
			cout << "Incorrect data." << endl;
			exit(0);
		}
		srand(random);
		for (int i = 0; i < numbers.size(); i++)
		{
			numbers[i] = rand()%10;
		}
		

		// Part 1.2 Excepting the repeats
		retrying: // goto operator goes here - retrying is for except the repeated numbers;
		int counter = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			counter++;
			for (int j = counter; j < numbers.size(); j++)
			{
				if (numbers[i] == numbers[j]) {
					numbers[i] = rand() % 10;
				}

			}
		}
		//Part 1.3. Cheking for availability repeats.
		if ((numbers[0] == numbers[1]) || (numbers[0] == numbers[2]) || (numbers[0] == numbers[3]) ||
			(numbers[1] == numbers[2]) || (numbers[1] == numbers[3]) ||
			(numbers[2] == numbers[3]))
		{
			goto retrying;
		}
		/*
		Viewing the numbers
		for (int i = 0; i < numbers.size(); i++)
		{
			cout << numbers[i];
		}*/

		for (int i = 0; i < numbers.size(); i++)
		{
			cout << numbers[i];
		}
		cout << endl;
		
		
		
		cout << endl << "Guess the 4 different numbers: " << endl;
		//Part 1.4 Filling vetor guess
		
		// guess-numbers repeat;
		error_indifferent_numbers_repeat:
		
		
		for (int i = 0; i < guess.size(); i++)
		{
			int to_guess;
			cin >> to_guess;
			if (!cin >> to_guess) {
				cerr << "Incorrect data!" << endl;
				exit(0);
			}
			guess[i] = to_guess;
		}
		int counter_2 = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			counter_2++;
			for (int j = counter_2; j < guess.size(); j++)
			{
				if (guess[i] == guess[j]) {
					cout << "Input different numbers!" << endl;
					goto error_indifferent_numbers_repeat;
				}

			}
		}

		// Part 1.5 The bulls and cows
		// if suc_bull_n_cows[i] = 1, we have one bull, else if suc_..._cows[i] = 2, we have one cow.
		vector<int> suc_bulls_n_cows = { 0, 0, 0, 0 };
		for (int i = 0; i < guess.size(); i++)
		{
			if (guess[i] == numbers[i]) {
				suc_bulls_n_cows[i] = 1;
			}
		}
		for (int i = 0; i < guess.size(); i++)
		{
			if (suc_bulls_n_cows[i] == 0)
			{
				for (int j = 0; j < 4; j++)
				{
					if (guess[i] == numbers[j]) {
						suc_bulls_n_cows[i] = 2;
					}
				}
			}
		}
		//Part 1.6 How many bulls and cows.
		int bull_1 = 0;
		int cows_2 = 0;
		for (int i = 0; i < 4; i++)
		{
			if (suc_bulls_n_cows[i] == 1) {
				bull_1 += 1;
			}
			else if (suc_bulls_n_cows[i] == 2) {
				cows_2 += 1;
			}
		}
		cout << bull_1 << " bull(s) and " << cows_2 << " cow(s)." << endl;

	} while (!((guess[0] == numbers[0]) && (guess[1] == numbers[1]) && (guess[2] == numbers[2]) && (guess[3] == numbers[3])));
	cout << endl << "Sucsess!" << endl;

	system("pause");
	return 0;
}