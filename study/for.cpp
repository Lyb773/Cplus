#include <iostream>
#include<math.h>

using namespace std;

int getValue()
{
    int value;
    cout << "This program will return the term(s) of" << endl;
    cout << "T(n) = 2 ^ ( n - 5 )" << endl;
    cout << "How many terms you want?  ";
    cin >> value;
    return value;
}
void frloop(int value)
{
    for (int i = 1; i<=value; i++)
    {
        double asum;
        asum += pow(2, (i - 5));
        cout << "T(" << i << ") = " << pow(2, (i - 5)) << endl;
        if (i == value)
            cout << "The Geometric Series of " << value << " terms is " << asum;
    }
}

int main()
{
    int num{ getValue() };
    frloop(num);
    return 0;
}
