#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

void main(){

	string number;
	trying_again://///////////////////////////////////////////// goto 1
	cin >> number;
	int number_to_int = 0;
	for (int i = 0; i < number.size(); i++)
	{
		if ((int)number[i] < 48 || (int)number[i] > 57)
		{
			cerr << "Error: wrong sympol, try again" << endl;
			goto trying_again;////////////////////////////////// goto 1
		}
	}
	// 345
	for (int i = 0; i < number.size(); i++)
	{
		int ten = pow(10, number.size()-(i+1));
		number_to_int += ((int)number[i] - (int)'0') * ten;
	}
	cout << number_to_int << " is ";
	for (int i = 0; i < number.size(); i++)
	{
		switch (number.size() - i) {
		case 4:
			cout << number[i] << " thousand ";
			break;
		case 3:
			cout << number[i] << " hundred ";
			break;
		case 2:
			cout << number[i] << " decade ";
			break;
		case 1:
			cout << number[i] << " unit " << endl;
			break;
		default:
			break;
		}
	}
	cout << "Would you like to try again? (y/n)" << endl;
	char again;
	cin >> again;
	if (again == 'y')
	{
		goto trying_again;////////////////////////////////////// goto 1
	}
	system("pause");
}