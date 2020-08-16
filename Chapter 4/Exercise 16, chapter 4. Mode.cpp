//Program finds mode.
// The "mode" is the value that occurs most often.
#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){

	vector<int> positive_numbers;
	vector<int> repeats;
	cout << "Enter the row of positive_numbers(99999 to continue): ";
		
	int row = 0;
	do{
		cin >> row;
		if (row != 99999){
			positive_numbers.push_back(row);
		}
	} while (row != 99999); // 99999 is the exit from the loop

	sort(positive_numbers.begin(), positive_numbers.end());
	int counter = 0; // coutnter will be written as a array and will be used to find index of maximum amount of repetitions
	
	// Finding the simular elements 
	for (int i = 0; i < positive_numbers.size(); i++){
		for (int j = 0; j < positive_numbers.size(); j++){
			if (positive_numbers[i] == positive_numbers[j]){
				counter++;
			}
		}
		repeats.push_back(counter);
		counter = 0;
	}
	vector<int> positive_numbers_without_repeats;
	vector<int> repeats_according_with_positive_numbers; // according with pos.numb. without repeats
	for (int i = 0; i < repeats.size(); i++){
		if (repeats[i] == 1){
			++counter;
			// if the counter will be equal to size of vector "repeats" so we don't have mode
		}
		

		// Removing duplicate elements of both vectors
		if (i == 0 || positive_numbers[i-1] != positive_numbers[i]){
			positive_numbers_without_repeats.push_back(positive_numbers[i]);
			repeats_according_with_positive_numbers.push_back(repeats[i]);
		}
	}
	int max = 0;	// This is the index of maximum amount repetitions
					// if max == 2, mode or modes repeats twice 
	for (int i = 0; i < repeats_according_with_positive_numbers.size(); i++){
		if (i == 0 || repeats_according_with_positive_numbers[i]>repeats_according_with_positive_numbers[i-1]){
			max = repeats_according_with_positive_numbers[i];
		}
	}
	// Finally, input result in console
	if (counter == repeats_according_with_positive_numbers.size()){
		cout << "We don't have mode." << endl;
	}
	else {
		for (int i = 0; i < positive_numbers_without_repeats.size(); i++){
			if (repeats_according_with_positive_numbers[i] == max) {
				cout << "Mode is " << positive_numbers_without_repeats[i] 
					<< " with " << repeats_according_with_positive_numbers[i] << " repeats\n";
			}
		}
	}
system("pause");
return 0;
}