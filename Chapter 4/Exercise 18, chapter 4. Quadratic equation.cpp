// The program solves the quadratic equation
#include<iostream>
#include<vector>
#include <cmath>
using namespace std;

double square(double x) {
	return x * x;
}

int main(){
	cout << "Input 'a', 'b' and 'c' in the equation 'a*(x*x) + b*x + c'\n";
	vector<double> el; // value of elements;
	vector<string> elements = { "a", "b", "c"};
							//   0    1    2
	for (int i = 0; i < elements.size(); i++){
		cout << "Input " << elements[i] << ": ";
		double elements_value = 0;
		cin >> elements_value;
		el.push_back(elements_value);
	}
	
	// If b of c == 0
	if (el[1] == 0) {
		double x = sqrt(el[2] / el[0]);
		cout << "The roots are +/- sqrt(-" << x << ")"<< endl;
	}
	else if (el[2] == 0) {
		double x = -el[1] / el[0];
		cout << "The roots are 0 or " << x << endl;
	}
	else {

		// discriminant
		double discriminant = square(el[1]) - (4 * el[0] * el[2]);
		if (discriminant < 0) {
			cout << "Roots arn't exist." << endl;
		}
		else if (discriminant == 0) {
			double x = (-el[1] + sqrt(discriminant)) / (2 * el[0]);
			cout << "The root is " << x << endl;
		}
		else if (discriminant > 0) {
			double x1 = (-el[1] + sqrt(discriminant)) / (2 * el[0]);
			double x2 = (-el[1] - sqrt(discriminant)) / (2 * el[0]);
			cout << "The roots are " << x1 << ", " << x2 << endl;
		}
	}
	system("pause");
	return 0;
}