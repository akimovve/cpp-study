#include <iostream>

using namespace std;

int main()
{
    int a1, b1, c1, a2, b2, c2, s1, s2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    s1 = a1 * b1 * c1;
    s2 = a2 * b2 * c2;
    if (s1 == s2)
    {
        cout << "Boxes are equal";
    }
    else if (a1 >= a2 && b1 >= b2 && c1 >= c2 || a1 >= a2 && b1 >= c2 && c2 >= b2 || a1 >= b2 && b1 >= a2 && c1 >= c2 || a1 >= b2 && b1 >= c2 && c1 >= a2 ||
        a1 >= c2 && b1 >= a2 && c1 >= b2 || a1 >= c2 && b1 >= b2 && c1 >= a2)
    {
        cout << "The first box is larger than the second one";
    }
    else if (a1 <= a2 && b1 <= b2 && c1 <= c2 || a1 <= a2 && b1 <= c2 && c2 <= b2 || a1 <= b2 && b1 <= a2 && c1 <= c2 || a1 <= b2 && b1 <= c2 && c1 <= a2 ||
        a1 <= c2 && b1 <= a2 && c1 <= b2 || a1 <= c2 && b1 <= b2 && c1 <= a2)
    {
        cout << "The first box is smaller than the second one";
    }
    else
    {
        cout << "Boxes are incomparable";
    }
}
