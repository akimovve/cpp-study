#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int count1 = x % 10;
    int count2 = x / 10 % 10;
    int count3 = x / 100;
    cout << count3 << " + " << count2 << " + " << count1 << " = " << count1 + count2 + count3;
    return 0;
}
