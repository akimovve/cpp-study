#include <iostream>

using namespace std;

void recusion(int ans, int ans1)
{
    if(ans > 0)
    {
        if (ans == 1)
        {
            cout << ans1 + 1;
        }
        else
        {
            ans1 += ans;
            recusion(ans -= 1, ans1);
        }
    }
    else
    {
        if (ans == 0)
        {
            cout << ans1 + 1;
        }
        else
        {
            ans1 += ans;
            recusion(ans +=1, ans1);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    recusion(n, 0);
    return 0;
}
