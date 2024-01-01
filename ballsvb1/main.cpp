#include <iostream>
#include <vector>

using namespace std;

bool cmp(pair <int, int> left, pair <int, int> right)
{
    if(left.second != right.second)
    {
        return left.second > right.second;
    }
    else
    {
        return left.first < right.first;
    }
}
int main()
{
    int n, ans = 0;
    cin >> n;
    vector < pair < int, int >> vect;
    vect.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vect[i].first;
        cin >> vect[i].second;
    }
    pair < int, int> max1 = {vect[0].first, vect[0].second};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            if(cmp(max1,vect[j]))
            {
                ans = j;
                max1.first = vect[j].first;
                max1.second = vect[j].second;
            }
        }
        swap(vect[n - i - 1], vect[ans]);
        max1.first = vect[0].first;
        max1.second = vect[0].second;
        ans = 0;
    }
    for(int i = 0; i < n; i++)
    {
        cout << vect[i].first << " " << vect[i].second << endl;
    }
    return 0;
}
