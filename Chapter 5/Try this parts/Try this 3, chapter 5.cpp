#include<iostream>
#include<vector>
#include <stdexcept>
using namespace std;


int main(){
	
	vector<double> temps;

	for (double temp; cin >> temp;)
		temps.push_back(temp);

	double sum = 0;
	double high_temp = 0;
	double low_temp = temps[1];

	for (double x : temps) {

		if (x > high_temp) high_temp = x;
		if (x < low_temp) low_temp = x;
		sum += x;
	}
	cout << "Max temp = " << high_temp << endl;
	cout << "Min temp = " << low_temp << endl;
	cout << "Average = " << sum / temps.size() << endl;



	system("pause");
	return 0;
}