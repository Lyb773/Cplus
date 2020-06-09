// MyFirstProgram.cpp : ...
// Lyb773

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int year;
	cout << "Year? ";
	cin >> year;
	if (year % 400 == 0)
		cout << year << " is a leap year.";
	else if ((year % 4 == 0) && (year % 100 != 0))
		cout << year << " is a leap year.";
	else
		cout << year << " is a common year.";
	return 0;
}

