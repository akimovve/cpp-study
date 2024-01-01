#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int long a, b, c, d;
    long long a1, b1, c1;
    cin >> a >> b >> c >> d;
    for(int i = -100; i <= 100; i++)
    {
        a1 = a * i * i * i;
        b1 = b * i * i;
        c1 = c * i;
        if((a1 + b1 + c1 + d) == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
