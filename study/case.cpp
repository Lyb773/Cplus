// MyFirstProgram.cpp : ...
// Lyb773

#include <iostream>

using namespace std;

int getValue()
{
    int selection;
    cout << "Which payment method? " << endl;
	cout << "1 - Cash" << endl;
	cout << "2 - EPS" << endl;
	cout << "3 - UnionPay" << endl;
    cout << "4 - Visa/Master" << endl;
	cout << endl << "Your choice -> ";
	cin >> selection;
    return selection;
}

void paymentMethod(int i)
{
    switch(i)
    {
        case 1:
            cout << endl << "Cash";
            break;
        case 2:
            cout << endl << "EPS";
            break;
        case 3:
            cout << endl << "UnionPay";
            break;
        case 4:
            cout << endl << "Visa/Master card";
            break;
        default:
            cout << endl << "Incorrect input";
            break;
    }
}

int main()
{
    int x{ getValue() };
    paymentMethod(x);
    return 0;
}
