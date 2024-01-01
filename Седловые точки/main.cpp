#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int recus (int a, int a1, int b, int b1)
{
    if(a == a1)
    {
        return 1;
    }
    else if (a > a1)
    {
        return 0;
    }
    return recus(a + b, a1, b, b1) + recus(a + b1, a1, b, b1);
}

int main()
{
    int b1, c, c1;
    cin >> b1 >> c >> c1;
    if(recus(1, b1, c, c1) > 0)
    {
        cout << "YES" << " " << recus(1, b1, c, c1);
    }
    else
    {
        cout << "NO" << " " << recus(1, b1, c, c1);
    }
    return 0;
}
