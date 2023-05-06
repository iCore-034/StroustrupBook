#include<iostream>
#include<vector>
using namespace std;

int main() {
	
		cout << "Hello, here I'm asking for some numbers and count of them." << endl;
		cout << "Input count of sums numbers: ";
		int count;
		cin >> count;
		if (!cin)
		{
		cerr << "Mistake: type isn't int." << endl;
		exit(0);
		}
		vector<double> numbers;
		cout << "Enter the numbers: ";
		double x = 0;
		for (int i = 0; cin >> x ; i++)
		{
			numbers.push_back(x);
		}
		if (numbers.size() < count)
		{
			cerr << "Error: you required to sum more vector has." << endl;
			exit(0);
		}
		double sum = 0;
		for (int i = 0; i < count; i++)
		{
			sum += numbers[i];

		}
		int check = sum;
		
		if (check != sum) {
			cerr << "Error: can't pretend in type int.\n";
		}
		else
		{
			cout << "Sum of first " << count << " numbers "
				 << "is: " << sum << endl;
		}
	

		system("pause");
		return 0;
}