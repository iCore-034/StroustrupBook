#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
//------------------------------------ Task 8.4 ------------------------------------
void fibonacci_2(int x, int y, vector<int>& v, int n, int randint) {
	v.push_back(x); v.push_back(y);
	for (size_t i = 0; i < n; i++)
	{
		auto g = v.begin();
		v.push_back(*(g + i) + *(g + i + 1));
		if (randint <= v[v.size()-2])
		{
			cout << "Maximum is somewhere between " << *(g + i) << " and " << *(g + i + 1);
			return;
		}
	}
}
void task_4() {

	srand(time(NULL));
	int x = 1;
	int y = 1;
	int n = 50;
	vector<int> v;
	int randint = rand() % 100000;
	cout << randint << "\n";
	int num = 0;
	cout << "Input your number: "; cin >> num; cout << "\n";
	if (num > randint)
	{
		cout << "Wrong number, try again" << endl;
		task_4();
		return;
	}
	fibonacci_2(x, y, v, n, randint);

}
//------------------------------------ Task 8.2 and 8.3 ------------------------------------
void print(vector<int> v) {
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}
void fibonacci(int x, int y, vector<int>& v, int n) {
	v.push_back(x); v.push_back(y);
	for (size_t i = 0; i < n; i++)
	{
		auto g = v.begin();
		v.push_back(*(g + i) + *(g + i + 1));
	}
}
void main() {

	srand(time(NULL));
	//int x;
	//int y;
	//vector<int> v;
	//int n;
	//// ___________________ UI =)______________________________
	//cout << "Input first element\n Second element\nAnd the count of numbers in a row\n";
	//cout << "First: ";
	//cin >> x; 
	//cout << "\n";
	//cout << "Second: ";
	//cin >> y;
	//cout << "\n";
	//cout << "Count: ";
	//cin >> n;
	//cout << "\n";
	////______________________________________________________

	//fibonacci(x, y, v, n);
	//print(v);

	task_4();
}
