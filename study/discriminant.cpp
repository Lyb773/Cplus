// MyFirstProgram.cpp : ...
// Lyb773

#include <iostream>
#include <math.h>

using namespace std;

int getValue()
{
    int num;
    cout << "Input a value: ";
    cin >> num;
    return num ;
}

void discriminant(int a, int b , int c)
{
    double discri;
    discri = pow(b, 2) - (4 * a * c);
    if (discri > 0)
		cout << "2 distinct real roots";
	else if (discri == 0)
		cout << "1 Common root";
	else
		cout << "No real roots";
}

int main()
{
    int a{ getValue() };
    int b{ getValue() };
    int c{ getValue() };
    discriminant(a, b, c);
    return 0;
}

