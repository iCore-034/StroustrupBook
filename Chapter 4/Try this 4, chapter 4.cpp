// Program replaces repeated and forbidden words which user enters 

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
								// You can add forbidden words endlessly
vector<string> unliked_words = { "pussy", "cunt", "faggot", "bullshit", "looser", "fuck" };

//This function checks the words entered by user for compliance firbidden words
int unliked(string x) {
	int sum = 0;
	for (int a = 0; a < unliked_words.size(); a++) {
		if (x == unliked_words[a]) {
			sum += 1; // if at least one forbidden word is found the rusult of sum becomes equal 1
		}
	}
	return sum;
}

int main() {
	// vector is used for creating words array; the task requires
	vector<string> words;
	for (string temp; cin >> temp;) { 
		cout << "Enter words(push 'ctrl+z' to stop):" << endl;
		words.push_back(temp);
	}
	
	// the tast requires the sort algorithm
	sort(words.begin(), words.end());
	for (int i = 0; i < words.size(); i++) {
		
		if (i == 0 || words[i - 1] != words[i]) { // this code-string checks repeated words
			 
			if (unliked(words[i]) == 1) { // entered word is forbidden if the "return sum" == 1
				 cout << "Forbidden word! BLEEP!" << endl;
			 }
			 else {
				 cout << "Valid word: " << words[i] << endl;
			 }
		}
		else { //replaces repeated words
			cout << "Repeated word! BLEEP!" << endl;
		}
	}
	system("pause");
	return 0;
	}