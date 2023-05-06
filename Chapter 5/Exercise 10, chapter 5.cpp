#include<iostream>
#include<vector>
using namespace std;

int main() {
	
		cout << "Hello, here I'm asking for some numbers and count of them." << endl;
		//Part 1. Count of numbers
		cout << "Input count of sums numbers: ";
		int count;
		cin >> count;
		if (!cin)
		{
		cerr << "Mistake: type isn't int." << endl;
		exit(0);
		}
		// Part 2. Vector
		vector<double> numbers;
		cout << "Enter the numbers: ";
		double x = 0;
		for (int i = 0; cin >> x ; i++)
		{
			numbers.push_back(x);
		}
		//Part 3. Checking on mistakes
		if (numbers.size() < count)
		{
			cerr << "Error: you required to sum more vector has." << endl;
			exit(0);
		}
		//Part 4. Sum
		double sum = 0;
		for (int i = 0; i < count; i++)
		{
			sum += numbers[i];

		}
		int check = sum;
		
		// Part 5. Type error
		if (check != sum) {
			cerr << "Error: can't pretend in type int.\n";
		}
		else
		{
			cout << "Sum of first " << count << " numbers "
				 << "is: " << sum << endl;
		}
		// Part 6. Difference in numbers of vector.
		cout << "Differens in numbers of vector: ";
		for (int i = 0; i < numbers.size()-1; i++)
		{
			cout << numbers[i + 1] - numbers[i] << ", ";
		}

		system("pause");
		return 0;
}