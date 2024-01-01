#include <iostream>
#include <vector>

using namespace std;

double f(double a, double b, double c, double d, double x)
{
    return a * x * x * x + b * x * x + c * x + d;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int i = 1;
    while(f(a, b, c, d, i) * f(a, b, c, d, -i) >= 0)
    {
        i = i * 2;
    }
    double l = -i, r = i;
    double mid = (l + r) / 2;
    while(r - l > 1e12)
    {
        cout << l << " " << r << " " << mid << endl;
        mid = (l + r) / 2;
        if((f(a, b, c, d, mid) * f(a, b, c, d, r)) < 0)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    return 0;
}
