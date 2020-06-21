#include <iostream>
#include <cmath>
using namespace std;

double distance(int x1, int y1, int x2, int y2) 
{ 
    // Calculating distance 
    return sqrt(pow(x2 - x1, 2) +  
                pow(y2 - y1, 2) * 1.0); 
} 

int main()
{
    int x1, y1, x2, y2;
    cout << "x1 ?" << endl;
    cin >> x1;
    cout << "y1 ?" << endl;
    cin >> y1;
    cout << "x2 ?" << endl;
    cin >> x2;
    cout << "y2 ?" << endl;
    cin >> y2;
    cout << "The distance betweem 2 point is " << distance(x1, y1, x2, y2);
    return 0;
}
