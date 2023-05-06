// I don't know why I wrote it and for what. It just neñessary for the book tasks.
#include<iostream>
#include<vector>
using namespace std;
int area(int length, int width) {
	if (length <= 0 || width <= 0) {
		return 0;
	}
	else {
		return length * width;
	}
}
int framed_area(int x, int y) {
	const int framed_width = 2;
	if (x - framed_width <= 0 || y - framed_width <= 0) {
		return 0;
	}
	else {
		return area(x - framed_width, y - framed_width);
	}
}
void f(int x, int y, int z) {
	int area1 = area(x, y);
	if (area1 <= 0) {
		cout << "Error!" << endl;
	}
	else {
		cout <<"1. " <<area1 << endl;
	}
	int area2 = framed_area(3, z);
	if (area2 == 0) {
		cout << "Error 2!" << endl;
	}
	else {
		cout << "2. " << area2 << endl;
	}
	int area3 = framed_area(y, z);
	if (area3 == 0){
		cout << "Error 3!" << endl;
	}
	else {
		cout << "3. " << area3 << endl;
	}
	if (area2 > 0 && area3 > 0) {
		double ratio = double(area1) / area3;
		cout << "Ratio == " << ratio << endl;
	}
	else {
		cout << "Ratio is undefined." << endl;
	}
}

int main(){

	cout << "Enter three numbers: ";
	int one = 0;
	int two = 0;
	int three = 0;
	cin >> one >> two >> three;
	f(one, two, three);
	system("pause");
	return 0;

}