#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

int sum(int a, int sum1)
{
    cin >> a;
    sum1 += a;
    if(a == 0)
    {
        return sum1;
    }
    return sum(a, sum1);
}

int main()
{
    cout << sum(0, 0);
    return 0;
}
