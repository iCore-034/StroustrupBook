#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	
	vector<double> length;
	double num = 0;
	double median = 0; // median and sum of distance;
	cout << "Input the distance between city (double type)" << endl;
	for (num; cin >> num;) {
		length.push_back(num);
		median += num;
	}
	cout << "Median is: " << median / length.size() << endl;
	cout << "The sum of distance: " << median << endl;
	vector<double> distances;

	int x = 0;
	while (x < (length.size()-1)) {
		distances.push_back(abs(length[x] - length[x + 1]));
		cout << "Distance between " << length[x] << " and " << length[x + 1] << " is " << abs(length[x] - length[x + 1]) << endl;
		x++;
	}
	sort(distances.begin(), distances.end());
	cout << "Min distanse == " << distances.front() << endl << "Max distanse == " << distances.back() << endl;
	
	double average = 0;
	for (double x : distances) {
		average += x;
	}
	cout << "The average distance of all: " << average / distances.size() << endl;






	system("pause");
	return 0;
}