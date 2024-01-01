#include <iostream>

using namespace std;



int main()
{
    long long a, z;
    cin >> a;
    for(int i = 0; i < 10; i++)
    {
        z = a % 10;
        cout << z << " ";
        a = a / 10;
    }
    return 0;
}
