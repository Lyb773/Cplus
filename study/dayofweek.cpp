#include <iostream>
#include<math.h>
using namespace std;

int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y/4 - y/100 + y/400 + t[m - 1] + d) % 7;
}
void weekday(int i)
{
    switch(i)
    {
        case 0:
            cout << endl << "Sunday";
            break;
        case 1:
            cout << endl << "Monday";
            break;
        case 2:
            cout << endl << "Twesday";
            break;
        case 3:
            cout << endl << "Wednesday";
            break;
        case 4:
            cout << endl << "Thursday";
            break;
        case 5:
            cout << endl << "Friday";
            break;
        case 6:
            cout << endl << "Saturday";
            break;
        default:
            cout << endl << "Incorrect input";
            break;
    }
}

int main()
{
    int year, month, day;
    cout << "Please input the year ->";
    cin >> year;
    cout << "Please input the month ->";
    cin >> month;
    cout << "Please input the day ->";
    cin >> day;
    int x { dayofweek(day, month, year) };
    weekday(x);
    return 0;
}

