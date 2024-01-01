#include <iostream>

using namespace std;

int main()
{
    int n, c, i1, i2, i;
    cin >> n;
    i1 = 1;
    i2 = 0;
    i = 1;
    if (n == 0)
    {
        cout << 0;
    }
    else if (n > 1)
    {
        while (i <= n)
        {
            c = i2;
            i2 = i1;
            i1 = i2 + c;
            i++;
        }
        cout << i2;
    }
    else
    {
        cout << 1;
    }
    return 0;
}
