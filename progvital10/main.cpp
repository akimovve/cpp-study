#include <iostream>
#include <string>

using namespace std;

int main()
{
    int l, r, l1, r1;
    cin >> l >> r >> l1 >> r1;
    if(abs(l - l1) % 2 == abs(r - r1) % 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
