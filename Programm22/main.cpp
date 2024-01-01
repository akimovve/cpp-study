#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, count1, count2;
    count1 = 0;
    count2 = 0;
    do
    {
        cin >> x;
        if (x == 0)
        {
            break;
        }
        else
        {
            count1++;
            count2 += x;
        }
    } while (1);
    cout  << count2 / float(count1);
    return 0;
}
