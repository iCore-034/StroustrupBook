#include<iostream>
#include<vector>
#include <stdexcept>
using namespace std;

double c = 0;
void ctok(double k){
	if (k < 0) {
		cerr << "Error: Temp is impossible." << endl;
		exit(0);
	}
	else {
		 c = k - 273.15;
		 cout << "Temp(C) == " << c << endl;
	}

}
int main() {
	
		double k = 0;
		cin >> k;
		ctok(k);
		
		system("pause");
		return 0;
}