// How many cells must filled to inventor get 1k, 1kk and 1kkk rice;
#include<iostream>
#include<vector>
using namespace std;


int main() {
	double arr[64];
	arr[0] = 1;
	cout << 1 << " == " << arr[0] << endl;
	for (int i = 1; i < 64; i++) {
		arr[i] = arr[i - 1] * 2;
		cout << i+1 << " == " <<arr[i] << endl;
	}
	int sum_1k = 0;
	int sum_1kk = 0;
	int sum_1kkk = 0;
	for (int i = 0; i < 64; i++) {
		if (arr[i] <= 1024) {
			sum_1k++;
		}
		else if (arr[i] <= 1000000) {
			sum_1kk++;
		}
		else if (arr[i] <= 1000000000) {
			sum_1kkk++;
		}
	}
	cout << "The inventor will receive more than 1.000 if more " << sum_1k-1 << " cells are filled.\n";
	cout << "The inventor will receive more than 1.000.000 if more " << sum_1k +sum_1kk  << " cells are filled.\n";
	cout << "The inventor will receive more than 1.000.000.000 if more " << sum_1k + sum_1kk +sum_1kkk << " cells are filled.\n";
	
	


	getchar();
	return 0;
}