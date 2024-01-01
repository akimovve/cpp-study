#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, from, to, k = 0;
    cin >> n >> m;
    vector < int > vect(n);
    for(int i = 0; i < m; i++)
    {
        cin >> from >> to;
        vect[to-1]++;
        vect[from-1]++;
    }
    for(int i = 1; i < n; i++)
    {
        if(vect[i] != vect[i-1])
        {
            k = 1;
            break;
        }
    }
    if(k == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
