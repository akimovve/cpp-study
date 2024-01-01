#include <iostream>
#include <vector>

using namespace std;

vector < vector < int >> vect;
vector < int > used;

void DFS(int num, int cmp)
{
    if(used[num] != 0)
    {
        return;
    }
    used[num] = cmp;
    for(int i = 0; i < vect[num].size(); i++)
    {
        DFS(vect[num][i], cmp);
    }
}

int main()
{
    int n, m, a, b;
    cin >> n >> m;
    vect.resize(n);
    used.resize(n);
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        vect[a - 1].push_back(b - 1);
        vect[b - 1].push_back(a - 1);
    }
    int cmp = 1;
    for(int i = 0; i < n; i++)
    {
        if(used[i] == 0)
        {
            DFS(i, cmp);
            cmp++;
        }
    }
    cout << cmp - 1;
    return 0;
}
