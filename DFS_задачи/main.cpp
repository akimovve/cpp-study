#include <iostream>
#include <vector>

using namespace std;

vector < vector < int >> graph;
vector < int > used;
vector < vector < int >> ans;

void DFS(int curV, int cmp)
{
    if(used[curV] != 0)
    {
        return;
    }
    used[curV] = cmp;
    for(int i = 0; i < graph[curV].size(); i++)
    {
        DFS(graph[curV][i], cmp);
    }

}

int main()
{
    int n, from, to, m1;
    cin >> n;
    graph.resize(n);
    used.resize(n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> m1;
            if(m1 == 1)
            {
                graph[i].push_back(j);
            }
        }
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
    cout << cmp - 1 << endl;
    cmp--;
    ans.resize(cmp);
    for(int i = 0; i < n; i++)
    {
        ans[used[i] - 1].push_back(i);
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].size() << endl;
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
