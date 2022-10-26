using namespace std;
#include <iostream>

int main()
{  
	int number, day, month, year;
	cout << "Enter a number: ";
	cin >> number;
	year = number % 10000;
	number = number / 10000;
	month = number % 100;
	number = number / 100;
	day = number;
	if (day <= 31 && month <= 12) {
		cout << day << "/" << month << "/" << year << " is valid date.";
	}
	else {
		cout << day << "/" << month << "/" << year << " is not valid date.";
	}
}

