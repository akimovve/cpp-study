#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool IsPointInSquare(double x, double y)
{
    return (abs(x) <= 1 && abs(y) <= 0.5) || (abs(x) <= 0.5 && abs(y) <= 1);
}
int main()
{
    double x, y;
    cin >> x >> y;
    if(IsPointInSquare(x, y))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
