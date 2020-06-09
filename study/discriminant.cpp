// MyFirstProgram.cpp : ...
// Lyb773

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a,b,c,discriminant;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	discriminant = pow(b, 2) - (4 * a * c);
	cout << "Discriminant = " << discriminant << endl;
	if (discriminant > 0)
		cout << "2 distinct real roots";
	else if (discriminant == 0)
		cout << "1 Common root";
	else
		cout << "No real roots";
	return 0;
}

