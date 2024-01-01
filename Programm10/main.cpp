#include <iostream>

using namespace std;

int main()
{
    int y, x;
    cin >> y >> x;
    if (y == x && y != 1)
    {
        cout << "2";
    }
    else if (y == 1 && x == 1)
    {
        cout << "0";
    }
    else
    {
        cout << "1";
    }
    return 0;
}
