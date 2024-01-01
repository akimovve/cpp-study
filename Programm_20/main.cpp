#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    cin >> x;
    for(int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            int c = 0;
            for(int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    c++;
                }
            }
            if (c == 2)
            {
                int y = x;
                while (y % i == 0)
                {
                    cout << i << " ";
                    y = y / i;
                }
            }
        }
    }
    return 0;
}
