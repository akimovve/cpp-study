#include <iostream>

using namespace std;

int main()
{

    long long a, b, i = 0;
    cin >> a >> b;
    if((b - a) % 2 != 0)
    {
        cout << (b - a + 1)/2;
    }
    else if(a % 2 == 0)
    {
        cout << (b - a)/2 + b;
    }
    else
    {
        cout << (b - a) / 2 - b;
    }
    return 0;
}
