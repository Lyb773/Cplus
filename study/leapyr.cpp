// MyFirstProgram.cpp : ...
// Lyb773

#include <iostream>
#include <math.h>

using namespace std;

int getYear()
{
    int year;
    cout << "Years? ";
    cin >> year;
    return year;
}

void isleap(int yr)
{
    if (yr % 400 == 0)
		cout << yr << " is a leap year.";
	else if ((yr % 4 == 0) && (yr % 100 != 0))
		cout << yr << " is a leap year.";
	else
		cout << yr << " is a common year.";
}

int main()
{
    int y{ getYear() };
    isleap(y);
    return 0;
}

