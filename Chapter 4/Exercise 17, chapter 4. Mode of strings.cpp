//Program finds mode.
// The "mode" is the value that occurs most often.
#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){

	vector<string> elements;
	vector<int> repeats;
	cout << "Enter the row of words or chars(write 'stop' to continue): ";
		
	string row;
	do{
		cin >> row;
		if (row != "stop"){
			elements.push_back(row);
		}
	} while (row != "stop"); // "stop" is the exit from the loop

	sort(elements.begin(), elements.end());
	int counter = 0; // coutnter will be written as a array and will be used to find index of maximum amount of repetitions
	
	// Finding the simular elements 
	for (int i = 0; i < elements.size(); i++){
		for (int j = 0; j < elements.size(); j++){
			if (elements[i] == elements[j]){
				counter++;
			}
		}
		repeats.push_back(counter);
		counter = 0;
	}
	vector<string> elements_without_repeats;
	vector<int> repeats_according_with_elements; // according with elements without repeats
	for (int i = 0; i < repeats.size(); i++){
		if (repeats[i] == 1){
			++counter;
			// if the counter will be equal to size of vector "repeats" so we don't have mode
		}
		

		// Removing duplicate elements of both vectors
		if (i == 0 || elements[i-1] != elements[i]){
			elements_without_repeats.push_back(elements[i]);
			repeats_according_with_elements.push_back(repeats[i]);
		}
	}
	int max = 0;	// This is the index of maximum amount repetitions
					// if max == 2, mode or modes repeats twice 
	for (int i = 0; i < repeats_according_with_elements.size(); i++){
		if (i == 0 || repeats_according_with_elements[i]>repeats_according_with_elements[i-1]){
			max = repeats_according_with_elements[i];
		}
	}
	// Finally, input result in console
	if (counter == repeats_according_with_elements.size()){
		cout << "We don't have mode." << endl;
	}
	else {
		for (int i = 0; i < elements_without_repeats.size(); i++){
			if (repeats_according_with_elements[i] == max) {
				cout << "Mode is '" << elements_without_repeats[i]
					<< "' with " << repeats_according_with_elements[i] << " repeats\n";
			}
		}
	}
	cout << "The smallest value have '" << elements.front() << "-element" << endl;
	cout << "The biggest velue have '" << elements.back() << "-element" << endl;
	system("pause");
return 0;
}