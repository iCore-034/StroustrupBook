// Еhe program receives 3 digits and puts them in a row ascending
#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i < 15; i++) {  //this cycle is for checking result
		int first = 0;				//
		int second = 0;				// initialization for mistakes prevention
		int third = 0;				//
		cout << "Enter three integer: ";

		cin >> first;
		cin >> second;
		cin >> third;
		cout << endl;				// to look goot in cmd
		if ((third - first) > 0 && (third - second) > 0) { // to programm knows that third is in the last
			if ((second - first) > 0) {
				cout << first << ", " << second << ", " << third << "\n";
			}
			else if ((second - first) < 0)
			{
				cout << second << ", " << first << ", " << third << "\n";
			}
			else {
				cout << second << ", " << first << ", " << third << "\n";
			}

		}
		else if ((second - first) > 0 && (second - third) > 0) { // to programm knows that second is in the last
			if ((third - first) > 0) {
				cout << first << ", " << third << ", " << second << "\n";
			}
			else if ((third - first) < 0) {
				cout << third << ", " << first << ", " << second << "\n";
			}
			else
				cout << third << ", " << first << ", " << second << "\n";
		}
		else {	// not the third and not the second is in the last, so first is it
			if ((third - second) > 0) {
				cout << second << ", " << third << ", " << first << "\n";
			}
			else if ((second - third) > 0) {
				cout << third << ", " << second << ", " << first << "\n";
			}
			else {
				cout << third << ", " << second << ", " << first << "\n";
			}

		}
	}

	return 0;
} 
