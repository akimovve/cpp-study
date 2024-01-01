#include <iostream>
#include <vector>

using namespace std;

bool cmp (pair <int, int>left, pair<int, int>right)
{
    if(left.first != right.first)
    {
        return left.first > right.first;
    }
    else
    {
        return left.second > right.second;
    }
}
int main()
{
    int n;
    cin >> n;
    vector < pair <int, int>> vectpair;
    vectpair.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vectpair[i].first;
        cin >> vectpair[i].second;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(cmp(vectpair[j] ,vectpair[j + 1]))
            {
                swap(vectpair[j], vectpair[j + 1]);
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << vectpair[i].first << " ";
        cout << vectpair[i].second << endl;
    }
    return 0;
}
