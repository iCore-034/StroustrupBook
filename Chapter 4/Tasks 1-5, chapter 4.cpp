// Task 1 - 5, chapter 4;
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
								
int main() {
	// Task 1;
	vector<double> twonum;    // double type is Task 4;
	cout << "Itput double int: " << endl;
	for (double list; cin >> list;) {
		cout << "Itput double int: " << endl;
		twonum.push_back(list);
	}
	int i = 0;
	while (i < twonum.size()) {
		cout << "Entered numbers:  "<< twonum[i] << endl;
		i++;
	}
	sort(twonum.begin(), twonum.end());
	
	//Task 5;
	if (((twonum[1] - twonum[0]) < 0.01) && ((twonum[1] - twonum[0]) !=0) ) {
		cout << "Integers almost equal." << endl;
	}
	// Task 2;
	else if (twonum[0] < twonum[1]) {
		cout << "Min integer is: " << twonum[0] << endl;
		cout << "Max integer is: " << twonum[1] << endl;
	}
	// Task 3;
	else {
		cout << "Intregers are equal." << endl;
	}
	system("pause");
	return 0;
}