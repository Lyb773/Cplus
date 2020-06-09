// MyFirstProgram.cpp : ...
// Lyb773

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	cout << "This program will return the first 5 terms of" << endl;
	cout << "T(n) = 2 ^ (n - 5)" << endl;

	while (i <= 5)
	{
		cout << "T(" << i << ") = " << pow(2, i-5) << endl;
		i++;
	}

	for (int i = 1; i <= 5; i++)
	{
		cout << "T(" << i << ") = " << pow(2, i-5) << endl;
	}
	return 0;
}

