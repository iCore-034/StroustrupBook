#include<iostream>
#include<vector>
#include<ctime>
using namespace std;

int main() {
	
	vector<string> days = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	//							0		 1			2			3			4			5		   6
	vector<int> counter; // vec <int> v = { 0  1  0  1  2  5  0} , so 0 is a Sunday results 
	vector<int> value;// vec < int > v2 = {76 12 38 74 34 99 70}, so 0 indicates that Sunday-result is 76, 38, 70.
	string input_string;
	
	vector<string> correct_days = { "Sunday","sunday", "Sun", "sun", "Monday", "monday", "Mon", "mon", "Tuesday", "tuesday", //0-9
		"tue", "Tue", "Wednesday", "wednesday", "Wedn", "wedn", "Wed", "wed", "Thursday", "thursday", "Thur", "thur",//10-21
		"Friday", "friday", "Fri", "fri", "Saturday", "saturday", "Satur", "satur", "Sat", "sat" };

	int denied_counter = 0;
	for (;;)//input_string != "Stop" || input_string != "stop"
	{
		cout << "\n Input day of the week and the number: ";
		cin >> input_string;
		if (!(input_string == "Stop" || input_string == "stop"))
		{
			// Ratio of counter-vector and the value-vector
			int number = 0;
			for (int i = 0; i < correct_days.size(); i++)
			{
				if (input_string == correct_days[i]) {
					//cout << "\n Input number :";
					cin >> number;
					if (!(!cin >> number))
					{
						for (int i = 0; i < 4; i++)
						{
							if (input_string == correct_days[i])
							{
								counter.push_back(0);
								value.push_back(number);
							}
						}
						for (int j = 4; j < 8; j++)
						{
							if (input_string == correct_days[j])
							{
								counter.push_back(1);
								value.push_back(number);
							}
						}
						for (int k = 8; k < 12; k++)
						{
							if (input_string == correct_days[k]) {
								counter.push_back(2);
								value.push_back(number);
							}
						}
						for (int l = 12; l < 18; l++)
						{
							if (input_string == correct_days[l])
							{
								counter.push_back(3);
								value.push_back(number);
							}
						}
						for (int m = 18; m < 22; m++)
						{
							if (input_string == correct_days[m]) {
								counter.push_back(4);
								value.push_back(number);
							}
						}
						for (int n = 22; n < 26; n++)
						{
							if (input_string == correct_days[n])
							{
								counter.push_back(5);
								value.push_back(number);
							}
						}
						for (int q = 26; q <= 31; q++)
						{
							if (input_string == correct_days[q]) {
								counter.push_back(6);
								value.push_back(number);
							}
						}
					}
					else {
						cerr << "Incorrect data." << endl;
						exit(0);
					}
				}
				else {
					denied_counter++;
				}
			}
		}
		else {
			cerr << "Exiting program." << endl;
			goto stop_entering_days_of_the_week_and_numbers;
		}
	}
	stop_entering_days_of_the_week_and_numbers:
	
	
	// Main task - output the value and the sums_of_value of certain days
	int sums_of_vectors = 0;
	for (int i = 0; i < days.size(); i++)
	{
		cout << days[i] << ": ";
		for (int j = 0; j < value.size(); j++)
		{
			if (counter[j] == i)
			{
				cout << value[j] << " ";
				sums_of_vectors += value[j];
			}
		}
		cout << endl << "Value sums of " << days[i] << " is " << sums_of_vectors << endl;
		cout << endl;
		sums_of_vectors = 0;
	}
	system("pause");
	return 0;
}