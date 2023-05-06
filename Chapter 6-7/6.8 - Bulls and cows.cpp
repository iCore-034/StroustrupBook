#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
class Bulls_cows
{
public:
	char comp;
	char player;
};
vector<Bulls_cows> bk;
vector<Bulls_cows> copy_bk;
string won;
vector<int> conserv;
void cows(int& bulls_count) {
	int cows_count = 0;
	for (int i = 0; i < bk.size(); i++)
	{
		for (int j = 0; j < bk.size(); j++)
		{
			if (bk[i].player == bk[j].comp)
			{
				cows_count++;
			}
		}
	}
	cout << cows_count << " cows!" << endl;
	bk = copy_bk;
}
void bulls() {
	int bulls_count = 0;
	for (int i = 0; i < bk.size(); i++)
	{
		if (bk[i].player == bk[i].comp)
		{
			bulls_count++;
			bk[i].comp = 0;
		}
	}
	if (bulls_count == 4)
	{
		won = "You won!";
		cout << "You won!" << endl;
	}
	else
	{
		cout << bulls_count << " bulls and ";
		cows(bulls_count);
	}
}
int main() {
	srand(time(NULL));
	
	Bulls_cows str;
	vector<char> random_char;
	for (int i = 0; i < 4; i++)
	{
		reroll:
		str.comp = rand() % 26 + 97;
		for (int i = 0; i < random_char.size(); i++)
		{
			if (str.comp == random_char[i])
			{
				goto reroll;
			}
		}
		random_char.push_back(str.comp);
		bk.push_back(str);
		cout << str.comp;
	}
	copy_bk = bk;
	cout << endl << "Guess bulls and cows!" << endl;
	while (won != "You won!")
	{
		for (int i = 0; i < bk.size(); i++)
		{
			cin >> bk[i].player;
		}
		bulls();
		cerr << endl;
	}
	system("pause");
	return 0;
}
