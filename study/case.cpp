// MyFirstProgram.cpp : ...
// Lyb773

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int method;
	cout << "Which set? " << endl;
	cout << "1 - McChicken" << endl;
	cout << "2 - McFish" << endl;
	cout << "3 - BigMac" << endl;
	cout << endl << "Your choice -> ";
	cin >> method;
	switch (method)
	{
	case 1:
		cout << endl << "You have selected McChicken.";
		break;
	case 2:
		cout << endl << "You have selected McFish.";
		break;
	case 3:
		cout << endl << "You have selected BigMac.";
		break;
	default:
		cout << endl << "Incorrect input!!";
		break;
	}
	return 0;
}
