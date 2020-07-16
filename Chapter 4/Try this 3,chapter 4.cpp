#include<iostream>
using namespace std;
	
// Performing the square root function without multiplication;

int square(int x)  // x + x for x times
{  
	int sum_of_x = 0;
	for (int i = 0; i < x; i++) {
		sum_of_x += x;
	}
	return sum_of_x;
}

int main() {
	cout << "Input integer: "<< endl;
		int test = 0;
		cin >> test;
	cout << square(test);

	getchar();
	return 0; 
}