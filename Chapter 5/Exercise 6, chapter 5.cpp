#include<iostream>
#include<vector>
#include <stdexcept>
using namespace std;

double f = 0;
void ctok(double c){
	if (c < -273.15) {
		cerr << "Error: Temp is impossible." << endl;
		exit(0);
	}
	else {
		f = (c * (double(9) / 5)) + 32;
		if (f < -459.67) {
			cerr << "Error: Temp is impossidle." << endl;
		}
		else {
			cout << "Temp(F) == " << f << endl;

		}
	}
}
int main() {
	
		double c = 0;
		cin >> c;
		ctok(c);
		
		system("pause");
		return 0;
}