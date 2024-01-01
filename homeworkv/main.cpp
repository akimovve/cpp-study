#include <iostream>

using namespace std;

void recusion(int n)
{
    if(n == 0)
    {
        return;
    }
    recusion(--n);
    cout << k;
}
int main()
{
    int n;
    cin >> n;
    recusion(n);
    return 0;
}
