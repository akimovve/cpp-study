#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j, c;
    cin >> m >> n >> i >> j >> c;
    if((m * n) % 2 == 0)
    {
        cout << "equal";
    }
    else
    {
        if((i + j) % 2 == 0)
        {
            if(c == 0)
            {
                cout << "black";
            }
            else
            {
                cout << "white";
            }
        }
        else
        {
            if(c == 0)
            {
                cout << "white";
            }
            else
            {
                cout << "black";
            }
        }
    }
    return 0;
}
