#include <iostream>

using namespace std;
	
int main() {
	
	// The programm whites down char and integer corresponding to the character
	
	char letter = 0;
	
	int c = 1;
	while (c < 256) 
	{
		int letter_equivalent = letter;
		cout << letter << '\t' << letter_equivalent << '\n';
		letter = (0 + c);
		c++;
	}
	
	// or

	for (int i = 0; i < 256; i++) {
		int letter_equivalent = letter;
		cout << letter << '\t' << letter_equivalent << '\n';
		letter++;
	}
	

	system("pause");
	return 0; 
}
