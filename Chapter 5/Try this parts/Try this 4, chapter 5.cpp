#include<iostream>
#include<vector>
#include <stdexcept>
using namespace std;


int main() {

	vector<double> temps;

	for (double temp; cin >> temp;)
		temps.push_back(temp);

	double sum = 0;
	double high_temp = temps[1];
	double low_temp = temps[1];

	for (double x : temps) {

		if (x > high_temp) {
			high_temp = x;
		}
		else if (x > 70) {
			cout << "Is this data from the Earth? +70 degrees Celsius.. are you from Dashli-Loot?" <<  endl;
		}
		if (x < low_temp) {
			low_temp = x;
		}
		else if (x < -89.2) {
			cout << "Are you from Oymyakon? -89.2 is lowest temp in the Earth." << endl;
		}
			sum += x;
	}
	cout << "Max temp = " << high_temp << endl;
	cout << "Min temp = " << low_temp << endl;
	cout << "Average = " << sum / temps.size() << endl;



	system("pause");
	return 0;
}