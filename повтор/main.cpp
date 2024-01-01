#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    vector < long long > vect(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    int k;
    cin >> k;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(vect[j] > vect[j + 1])
            {
                swap(vect[j], vect[j + 1]);
            }
        }
    }
    int cnt = 1, cnt1 = 0;
    for(int i = 1; i < n; i++)
    {
        if(vect[i] == vect[i - 1])
        {
            cnt++;
        }
        else
        {
            if(cnt == k)
            {
                cout << vect[i - 1] << " ";
                cnt1 = 1;
            }
            cnt = 1;
        }
    }
    if(cnt == k)
    {
        cout << vect[n - 1];
        cnt1 = 1;
    }
    if(cnt1 == 0)
    {
        cout << 0;
    }
    return 0;
}
