#include <iostream>

using namespace std;

int main()
{
    int n, n1, k, k1;
    cin >> n >> n1;
    if(n % 2 != 0)
    {
        k = n / 2 + 1;
    }
    else
    {
        k = n / 2;
    }
    if(n1 % 2 != 0)
    {
        k1 = n1 / 2 + 1;
    }
    else
    {
        k1 = n1 / 2;
    }
    cout << max (k1, k) <<" " << min(n, n1);
    return 0;
}
