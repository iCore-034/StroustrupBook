#include <iostream>
#include <vector>
#include "fact.h"
using namespace std;
class Combinatorical
{
public:
	int first;
	int second;
	double replace(int a, int b);
	double conjunction(int a, int b);
};
double Combinatorical::replace(int a, int b)
{
	return (fact(a) / (fact((a - b))));
}
double Combinatorical::conjunction(int a, int b)
{
	return ((replace(a, b)) / fact(b));
}
int main() {
	Combinatorical rep_con;

	cout << "This is a combinatorial program."                                   << endl <<
		    "It counts the number of ways to select M elements from N elements." << endl <<
		    "What do you want? Replace or conjunction? (r/c)"                    << endl;

	char choice;
	wrong_letter://---------------------------------------------------------- goto
	cin >> choice;
	if(choice != 'r' && choice != 'c')
	{
	cout << "May be you made a mistake? Choose 'r' or 'c' letter" << endl;
	goto wrong_letter;//----------------------------------------------------- goto
	}

	//________________________________INPUT NUMBER________________________________

	cout << "Input two numbers." << endl
		 <<  "The first is the total number of elements: ";
	cin  >> rep_con.first;
	cout << endl;
	cout << "The second is the number of selection elements: ";
	cin  >> rep_con.second;
	cout << endl;
	if (rep_con.second <= 0 || rep_con.first <= 0)
	{
		cerr << "Error: the first or the second number is less or equal zero or you input non-number unit." << endl;
		exit(0);
	}

	//________________________________CALL CHOICE-FUNCTION_________________________
	int result;
	if (choice == 'r')
	{
		result = rep_con.replace(rep_con.first, rep_con.second);
	}
	else
	{
		result = rep_con.conjunction(rep_con.first, rep_con.second);
	}
	cout << "Your result: " << result << endl;
	system("pause");
	return 0;
}