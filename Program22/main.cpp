#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d = a + b - c;
    if (d < 0)
    {
        cout << "Impossible";
    }
    else
    {
        cout << d;
    }
    return 0;
}
