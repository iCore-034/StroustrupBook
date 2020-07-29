// User guesses a number from 1 to 100 and the program guesses this number
#include<iostream>
#include<vector>
using namespace std;

int main() {

	cout << "Come up with a number between 1 and 100 inclusive: " << endl;
	int n = 0;
	cin >> n;
	cout << "Please, enter integer in accordance with: 1 = yes, 2 = no.\n";
	cout << "\nLess then 50?? ";
	int an = 0;
	cin >> an;
	if (an == 1) {
		cout << "Less then 25?\n";
		cin >> an;
		if (an == 1) {
			cout << "Less then 13?\n";
			cin >> an;
			if (an == 1) {
				cout << "Less then 7?\n";
				cin >> an;
				if (an == 1) {
					cout << "Less then 4?\n";
					cin >> an;
					if (an == 1) {
						cout << "Less then 2?\n";
						cin >> an;
						if (an == 1) {
							cout << "Your namber == 1\n";
						}
						else {
							cout << "Less 3?\n";
							cin >> an;
							if (an == 1) {
								cout << "Wow it's 2!\n";
							}
							else {
								cout << "So, 3 is good.\n";
							}
						}
					}
					else {
						cout << "Less then 5?\n";
						cin >> an;
						if (an == 1) {
							cout << "4 is nice\n";
						}
						else {
							cout << "Less then 6?\n";
							cin >> an;
							if (an == 1) {
								cout << "5 is 5\n";
							}
							else {
								cout << "6 is fine\n";
							}
						}
					}
				}
				else {
					cout << "Less then 10?\n";
					cin >> an;
					if (an == 1) {
						cout << "Less then 8?\n";
						cin >> an;
						if (an == 1) {
							cout << "Your namber == 7\n";
						}
						else {
							cout << "Less 9?\n";
							cin >> an;
							if (an == 1) {
								cout << "Wow it's 8!\n";
							}
							else {
								cout << "9 is great!\n";
							}
						}
					}
					else {
						cout << "Less then 11?\n";
						cin >> an;
						if (an == 1) {
							cout << "10 is nice\n";
						}
						else {
							cout << "Less 12?\n";
							cin >> an;
							if (an == 1) {
								cout << "11 .. fine\n";
							}
							else {
								cout << "12 is fine\n";
							}
						}
					}
				}
			}
			else { // Less 25 and more 13 inclusive
				cout << "Less then 19?\n";
				cin >> an;
				if (an == 1) {
					cout << "Less then 16?\n";
					cin >> an;
					if (an == 1) {
						cout << "Less then 14?\n";
						cin >> an;
						if (an == 1) {
							cout << "Your namber == 13\n";
						}
						else {
							cout << "Less 15?\n";
							cin >> an;
							if (an == 1) {
								cout << "Wow it's 14!\n";
							}
							else {
								cout << "So, 15 is good.\n";
							}
						}
					}
					else {
						cout << "Less then 17?\n";
						cin >> an;
						if (an == 1) {
							cout << "16 is nice\n";
						}
						else {
							cout << "Less then 18?\n";
							cin >> an;
							if (an == 1) {
								cout << "17 great!\n";
							}
							else {
								cout << "18 is fine\n";
							}
						}
					}
				}
				else {
					cout << "Less then 22?\n";
					cin >> an;
					if (an == 1) {
						cout << "Less then 20?\n";
						cin >> an;
						if (an == 1) {
							cout << "Your namber == 19\n";
						}
						else {
							cout << "Less 21?\n";
							cin >> an;
							if (an == 1) {
								cout << "Wow it's 20!\n";
							}
							else {
								cout << "21 is great!\n";
							}
						}
					}
					else {
						cout << "Less then 23?\n";
						cin >> an;
						if (an == 1) {
							cout << "22 is nice\n";
						}
						else {
							cout << "Less 24?\n";
							cin >> an;
							if (an == 1) {
								cout << "23 .. fine\n";
							}
							else {
								cout << "24 is fine\n";
							}
						}
					}
				}
			}
		}
		else { // Less 50 but more 25 inclusive
			cout << "Less then 37?\n";
			cin >> an;
			if (an == 1) {
				cout << "Less then 31?\n";
				cin >> an;
				if (an == 1) {
					cout << "Less then 28?\n";
					cin >> an;
					if (an == 1) {
						cout << "Less then 26?\n";
						cin >> an;
						if (an == 1) {
							cout << "Your namber == 25\n";
						}
						else {
							cout << "Less 27?\n";
							cin >> an;
							if (an == 1) {
								cout << "Wow it's 26!\n";
							}
							else {
								cout << "So, 27 is good.\n";
							}
						}
					}
					else {
						cout << "Less then 29?\n";
						cin >> an;
						if (an == 1) {
							cout << "28 is nice\n";
						}
						else {
							cout << "Less then 30?\n";
							cin >> an;
							if (an == 1) {
								cout << "29!\n";
							}
							else {
								cout << "30 is fine\n";
							}
						}
					}
				}
				else {
					cout << "Less then 34?\n";
					cin >> an;
					if (an == 1) {
						cout << "Less then 32?\n";
						cin >> an;
						if (an == 1) {
							cout << "Your namber == 31\n";
						}
						else {
							cout << "Less 33?\n";
							cin >> an;
							if (an == 1) {
								cout << "Wow it's 32!\n";
							}
							else {
								cout << "33 is great!\n";
							}
						}
					}
					else {
						cout << "Less then 35?\n";
						cin >> an;
						if (an == 1) {
							cout << "34 is nice\n";
						}
						else {
							cout << "Less 36?\n";
							cin >> an;
							if (an == 1) {
								cout << "35 .. fine\n";
							}
							else {
								cout << "36 is fine\n";
							}
						}
					}
				}
			}
			else {
				cout << "Less then 43?\n";
				cin >> an;
				if (an == 1) {
					cout << "Less then 40?\n";
					cin >> an;
					if (an == 1) {
						cout << "Less then 38?\n";
						cin >> an;
						if (an == 1) {
							cout << "Your namber == 37\n";
						}
						else {
							cout << "Less 39?\n";
							cin >> an;
							if (an == 1) {
								cout << "Wow it's 38!\n";
							}
							else {
								cout << "So, 39 is good.\n";
							}
						}
					}
					else {
						cout << "Less then 41?\n";
						cin >> an;
						if (an == 1) {
							cout << "40 is nice\n";
						}
						else {
							cout << "Less then 42?\n";
							cin >> an;
							if (an == 1) {
								cout << "41 great!\n";
							}
							else {
								cout << "42 is fine\n";
							}
						}
					}
				}
				else {
					cout << "Less then 46?\n";
					cin >> an;
					if (an == 1) {
						cout << "Less then 44?\n";
						cin >> an;
						if (an == 1) {
							cout << "Your namber == 43\n";
						}
						else {
							cout << "Less 45?\n";
							cin >> an;
							if (an == 1) {
								cout << "Wow it's 44!\n";
							}
							else {
								cout << "45 is great!\n";
							}
						}
					}
					else {
						cout << "Less then 47?\n";
						cin >> an;
						if (an == 1) {
							cout << "Your namber == 46\n";
						}
						else {
							cout << "Less 48?\n";
							cin >> an;
							if (an == 1) {
								cout << "Wow it's 47!\n";
							}
							else {
								cout << "Less than 49?\n";
								cin >> an;
								if (an == 1) {
									cout << "48 is a cool number\n";
								}
								else {
									cout << "49 obviosly!\n";
								}
							}
						}
					}
				}
			}
		}

	}
	else {
	cout << "Less then 75?\n";
	cin >> an;
	if (an == 1) {
		cout << "Less then 63?\n";
		cin >> an;
		if (an == 1) {
			cout << "Less then 57?\n";
			cin >> an;
			if (an == 1) {
				cout << "Less then 54?\n";
				cin >> an;
				if (an == 1) {
					cout << "Less then 52?\n";
					cin >> an;
					if (an == 1) {
						cout << "Your namber == 51\n";
					}
					else {
						cout << "Less 53?\n";
						cin >> an;
						if (an == 1) {
							cout << "Wow it's 52!\n";
						}
						else {
							cout << "So, 53 is good.\n";
						}
					}
				}
				else {
					cout << "Less then 55?\n";
					cin >> an;
					if (an == 1) {
						cout << "54 is nice\n";
					}
					else {
						cout << "Less then 56?\n";
						cin >> an;
						if (an == 1) {
							cout << "55 is 55\n";
						}
						else {
							cout << "56 is fine\n";
						}
					}
				}
			}
			else {
				cout << "Less then 60?\n";
				cin >> an;
				if (an == 1) {
					cout << "Less then 58?\n";
					cin >> an;
					if (an == 1) {
						cout << "Your namber == 57\n";
					}
					else {
						cout << "Less 59?\n";
						cin >> an;
						if (an == 1) {
							cout << "Wow it's 58!\n";
						}
						else {
							cout << "59 is great!\n";
						}
					}
				}
				else {
					cout << "Less then 61?\n";
					cin >> an;
					if (an == 1) {
						cout << "60 is nice\n";
					}
					else {
						cout << "Less 62?\n";
						cin >> an;
						if (an == 1) {
							cout << "61 .. fine\n";
						}
						else {
							cout << "62 is fine\n";
						}
					}
				}
			}
		}
		else { // Less 25 and more 13 inclusive
			cout << "Less then 69?\n";
			cin >> an;
			if (an == 1) {
				cout << "Less then 66?\n";
				cin >> an;
				if (an == 1) {
					cout << "Less then 64?\n";
					cin >> an;
					if (an == 1) {
						cout << "Your namber == 63\n";
					}
					else {
						cout << "Less 65?\n";
						cin >> an;
						if (an == 1) {
							cout << "Wow it's 64!\n";
						}
						else {
							cout << "So, 65 is good.\n";
						}
					}
				}
				else {
					cout << "Less then 67?\n";
					cin >> an;
					if (an == 1) {
						cout << "66 is nice\n";
					}
					else {
						cout << "Less then 68?\n";
						cin >> an;
						if (an == 1) {
							cout << "67 great!\n";
						}
						else {
							cout << "68 is fine\n";
						}
					}
				}
			}
			else {
				cout << "Less then 72?\n";
				cin >> an;
				if (an == 1) {
					cout << "Less then 70?\n";
					cin >> an;
					if (an == 1) {
						cout << "Your namber == 69\n";
					}
					else {
						cout << "Less 71?\n";
						cin >> an;
						if (an == 1) {
							cout << "Wow it's 70!\n";
						}
						else {
							cout << "71 is great!\n";
						}
					}
				}
				else {
					cout << "Less then 73?\n";
					cin >> an;
					if (an == 1) {
						cout << "72 is nice\n";
					}
					else {
						cout << "Less 74?\n";
						cin >> an;
						if (an == 1) {
							cout << "73 .. fine\n";
						}
						else {
							cout << "74 is fine\n";
						}
					}
				}
			}
		}
	}
	else { // Less 50 but more 25 inclusive
		cout << "Less then 87?\n";
		cin >> an;
		if (an == 1) {
			cout << "Less then 81?\n";
			cin >> an;
			if (an == 1) {
				cout << "Less then 78?\n";
				cin >> an;
				if (an == 1) {
					cout << "Less then 76?\n";
					cin >> an;
					if (an == 1) {
						cout << "Your namber == 75\n";
					}
					else {
						cout << "Less 77?\n";
						cin >> an;
						if (an == 1) {
							cout << "Wow it's 76!\n";
						}
						else {
							cout << "So, 77 is good.\n";
						}
					}
				}
				else {
					cout << "Less then 79?\n";
					cin >> an;
					if (an == 1) {
						cout << "78 is nice\n";
					}
					else {
						cout << "Less then 80?\n";
						cin >> an;
						if (an == 1) {
							cout << "79!\n";
						}
						else {
							cout << "80 is fine\n";
						}
					}
				}
			}
			else {
				cout << "Less then 84?\n";
				cin >> an;
				if (an == 1) {
					cout << "Less then 82?\n";
					cin >> an;
					if (an == 1) {
						cout << "Your namber == 81\n";
					}
					else {
						cout << "Less 83?\n";
						cin >> an;
						if (an == 1) {
							cout << "Wow it's 82!\n";
						}
						else {
							cout << "83 is great!\n";
						}
					}
				}
				else {
					cout << "Less then 85?\n";
					cin >> an;
					if (an == 1) {
						cout << "84 is nice\n";
					}
					else {
						cout << "Less 86?\n";
						cin >> an;
						if (an == 1) {
							cout << "85 .. fine\n";
						}
						else {
							cout << "86 is fine\n";
						}
					}
				}
			}
		}
		else {
			cout << "Less then 93?\n";
			cin >> an;
			if (an == 1) {
				cout << "Less then 90?\n";
				cin >> an;
				if (an == 1) {
					cout << "Less then 88?\n";
					cin >> an;
					if (an == 1) {
						cout << "Your namber == 87\n";
					}
					else {
						cout << "Less 89?\n";
						cin >> an;
						if (an == 1) {
							cout << "Wow it's 88!\n";
						}
						else {
							cout << "So, 89 is good.\n";
						}
					}
				}
				else {
					cout << "Less then 91?\n";
					cin >> an;
					if (an == 1) {
						cout << "90 is nice\n";
					}
					else {
						cout << "Less then 92?\n";
						cin >> an;
						if (an == 1) {
							cout << "91 great!\n";
						}
						else {
							cout << "92 is fine\n";
						}
					}
				}
			}
			else {
				cout << "Less then 96?\n";
				cin >> an;
				if (an == 1) {
					cout << "Less then 94?\n";
					cin >> an;
					if (an == 1) {
						cout << "Your namber == 93\n";
					}
					else {
						cout << "Less 95?\n";
						cin >> an;
						if (an == 1) {
							cout << "Wow it's 94!\n";
						}
						else {
							cout << "95 is great!\n";
						}
					}
				}
				else {
					cout << "Less then 97?\n";
					cin >> an;
					if (an == 1) {
						cout << "Your namber == 96\n";
					}
					else {
						cout << "Less 98?\n";
						cin >> an;
						if (an == 1) {
							cout << "Wow it's 97!\n";
						}
						else {
							cout << "Less than 99?\n";
							cin >> an;
							if (an == 1) {
								cout << "98 is a cool number\n";
							}
							else {
								cout << "Less than 100?\n";
								cin >> an;
								if (an == 1) {
									cout << "99 obviosly!\n";
								}
								else {
									cout << "100! Good job.\n";
								}
							}
						}
					}
				}
			}
		}
	}
	}
	system("pause");
		return 0;
}