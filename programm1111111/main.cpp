#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x;
    cin >> x;
    cout << floor((x - trunc(x)) * 10);
    return 0;
}
