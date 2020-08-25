// I don't know why I wrote it and for what. It just neñessary for the book tasks.
#include<iostream>
#include<vector>
using namespace std;

int main(){

	cout << "Input names and scores( NoName 0 is exit): ";
	
	string word_input;
	int score_input = 0;
	vector <string> words;
	vector<int> scores;
	int sum = 0;
	do{
		
		cin >> word_input;
		cin >> score_input;
		cout << "Input names and scores( NoName 0 is exit): ";
		for (int i = 0; i < words.size(); i++) {
			if (word_input == words[i]) {
				sum++;
			}
		}
		if (word_input == "NoName" || word_input == "noname" || word_input == "Noname") {
			cout << "The " << word_input << "-name doesn't exist." << endl;
		}
		else if (sum > 0) {
			cout << "You enter repeated name." << endl;
		}
		else {
			words.push_back(word_input);
			scores.push_back(score_input);
		}

		sum = 0;
	} while (word_input != "NoName" && score_input != 0);
	
	// For ex 19
	/*for (int i = 0; i < words.size() ; i++){
		cout << words[i] << " = " << scores[i] << endl;
	}*/
	
	cout << "What do you want to find? Name or score?" << endl;
	string choose;
	cin >> choose;
	if (choose == "score") {
		cout << "Enter name: ";
		string name_find;
		cin >> name_find;
		int no_such_names = 0;
		for (int i = 0; i < words.size(); i++){
			if (name_find == words[i]) {
				cout << "The result of " << name_find << " is " << scores[i] << endl;
			}
			else {
				no_such_names++;
			}
		}
		if (no_such_names == words.size()) {
			cout << "There is no such names." << endl;
		}
	}
	else if (choose == "name") {
		cout << "Enter score: ";
		int score_find = 0;
		cin >> score_find;
		int no_such_score = 0;
		for (int i = 0; i < scores.size(); i++){
			if (score_find == scores[i]) {
				cout << words[i] << " is owner of score " << score_find << endl;
			}
			else {
				no_such_score++;
			}
		}
		if (no_such_score == scores.size()) {
			cout << "There is no such score.\n";
		}
	}
	else {
		cout << "ERROR: mistake of input." << endl;
	}
	system("pause");
	return 0;

}