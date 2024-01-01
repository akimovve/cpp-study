#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n < 32)
    {
        cout << n << " " << 1;
    }
    else if(n > 31 && n < 60)
    {
        cout << n - 31 << " " << 2;
    }
    else if(n > 59 && n < 91)
    {
        cout << n - 59 << " " << 3;
    }
    else if(n > 90 && n < 121)
    {
        cout << n - 90 << " " << 4;
    }
    else if(n > 120 && n < 152)
    {
        cout << n -120 << " " << 5;
    }
    else if(n > 151 && n < 182)
    {
        cout << n - 151 << " " << 6;
    }
    else if(n > 181 && n < 213)
    {
        cout << n - 181 << " " << 7;
    }
    else if(n > 212 && n < 244)
    {
        cout << n - 212 << " " << 8;
    }
    else if(n > 243 && n < 274)
    {
        cout << n - 243 << " " << 9;
    }
    else if(n > 273 && n < 305)
    {
        cout << n - 273 << " " << 10;
    }
    else if(n > 304 && n < 335)
    {
        cout << n - 304 << " " << 11;
    }
    else
    {
        cout << n - 334 << " " << 12;
    }
    return 0;
}
