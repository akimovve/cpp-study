#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, c = 0;
    cin >> n >> k;
    vector < int > vect(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    int l = 0, r = n - 1, mid = (l + r) / 2;
    while(l < r)
    {
        mid = (l + r) / 2;
        if(vect[mid] < k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    cout << vect[l] << " " << vect[r];
    return 0;
}
