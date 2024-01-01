#include <iostream>

using namespace std;

int main()
{
    int n, a, b, max1 = 0, k = 1;
    for (int i = 0; k <= 9999990; i++)
    {
        k += k % 10;
        max1 = max(max1, k);
    }
    cout << max1;
}
