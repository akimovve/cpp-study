#include <iostream>

using namespace std;

int recus(int n, int a, int b, int c, int num)
{
    if(n > num)
    {
        return 0;
    }
    if(n == num)
    {
        return 1;
    }
    return recus(n + a, a, b, c, num) + recus(n + b, a, b, c, num) + recus(n + c, a, b, c, num);
}

int main()
{
    int a, b, c, num;
    {
        cin >> num >> a >> b >> c;
    }
    cout << recus(1, a, b, c, num);
    return 0;
}
