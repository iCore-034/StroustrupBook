#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	double sum = 0;		//Task 9;
	vector<double> number;
	double list = 0;
	// Task 6;
	for (int i = 0; i < 10; i++) {
		cout << "Intup the number: ";
		cin >> list;
		//	char measure[10]; // Task 7;
		//	cout << "Input unit( cm, in, ft): " << endl;
		//	cin >> measure;
		number.push_back(list); 
		sum += list;
		// Check the bigger and the smaller number
		sort(number.begin(), number.end()); //Task 11
			if (list == number.front()) { // to read first cell of vector
				
				cout << endl << "The smallest number among entered" << endl;
			}
			else if (list == number.back()) { // to read last cell of vector
				cout << endl  << "The largest number among entered." << endl;
			}
		//checking the unit of measurement and conversion to another
			
			/*	Task 8;	If measure == "in", "cm", "m", "ft"
			if (strcmp(measure, "in") == 0){
				cout << list << measure << " == " << list * 2.54 << " cm \n==" << list * 0.0254 << " m \n== " << list  /12 << " ft\n";
			}
			else if (strcmp(measure, "cm") == 0) {
				cout << list << measure << " == " << list / 2.54 << " in \n==" << list / 100 << " m \n== " << list *30.4 << " ft\n";
			}
			else if (strcmp(measure, "m") == 0) {
				cout << list << measure << " == " << list / 2.54 << " in \n==" << list * 100 << " cm \n== " << list *3.29 << " ft\n";
			}
			else if (strcmp(measure, "ft") == 0) {
				cout << list << measure << " == " << list *12 << " in \n==" << list * 30.48 << " cm \n== " << list / 30.48 << " m\n";
			}
			else {
				cout << "Program doesn't know this unit of measure" << endl; // Task 8;
			}
			*/
	}
	here:
	// Task 9;
	sum = sum - (number.front() + number.back());
	cout << "The sum of numbers bedide the smallest and the largest(in meters) = " << sum << endl;
	cout << number.size() << endl;
	// Task 10;
	for (double x : number) {
		cout << x << '\t';
	}

	system("pause");
	return 0;
}