#include <iostream>
#include<math.h>

using namespace std;

void whloop(int value)
{
    int i = 1;
    while (i <= value)
    {
        cout << "T(" << i << ") = " << pow(2, (i - value)) << endl;
        i++;
    }
    
}

int main()
{
    int num;
    cout << "Input a value: " << endl;
    cin >> num;
    cout << "This program will return the first " << num << " item(s) of" << endl;
    cout << "T(n) = 2 ^ ( n - 5 )" << endl;
    whloop(num);
    return 0;
}
