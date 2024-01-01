#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> a >> b >> n;
    unsigned long long l = 1, r = 10000000000000000;
    while(l < r)
    {
        unsigned long long mid = (l + r) / 2;
        if(((mid / a) * (mid / b))>= n)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l;
    return 0;
}
