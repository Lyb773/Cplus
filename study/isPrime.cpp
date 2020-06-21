#include <iostream>
using namespace std;

void isPrime(int num)
{
    if  (num == 1)
        cout << num << " is not a prime number.";
    int i = 2;
    for (; i*i <= num; i++)
    {
        if  (num % i == 0)
        {
            cout << num << " is not a prime number.";
            return;
        } 
         cout << num << " is a prime number.";
         return;
    }
}

int main()
{
    int number;
    cout << "Please input a number ->";
    cin >> number;
    isPrime(number);
}
