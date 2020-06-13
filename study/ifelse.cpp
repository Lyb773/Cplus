#include <iostream>

using namespace std;

int getValue()
{
    int salary;
    cout << "Enter your salary: ";
    cin >> salary;
    return salary;  
}

void increment(int value)
{
    if (value >= 70000)
        cout << "You will have 4.06% salary increment.";
    else
        cout << "You will have 4.51% salary increment.";
}

int main()
{
    int num{ getValue() };
    increment(num);
    return 0;
}
