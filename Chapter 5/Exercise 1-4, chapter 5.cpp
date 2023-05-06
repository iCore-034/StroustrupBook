#include<iostream>
#include<vector>
#include <stdexcept>
using namespace std;

double k = 0;
void ctok(double c){
	if (c < -273.15) {
		cerr << "Error: Temp is impossible." << endl;
		exit(0);
	}
	else {
		 k = c + 273.15;
		 cout << "Temp(K) == " << k << endl;
	}

}
int main() {
	
		double c = 0;
		cin >> c;
		ctok(c);
		
		system("pause");
		return 0;
}