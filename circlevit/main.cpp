#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a - 1) * b + (b - 1) * a - (a * b - 1);
    return 0;
}
