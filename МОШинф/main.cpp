#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n, cnt = 0;
    cin >> n;
    vector < long long > vect(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    for(long long i = 0; i < n; i++)
    {
        for(long long j = i + 1; j < n; j++)
        {
            if(vect[i] + j == vect[j] + i)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
