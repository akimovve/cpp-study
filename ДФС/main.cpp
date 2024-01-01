#include <iostream>
#include <vector>

using namespace std;

vector < vector < int >> graph;
vector < int > used;

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
    int n, m, from, to;
    cin >> n >> m;
    graph.resize(n);
    used.resize(n);
    for(int i = 0; i < m; i++)
    {
        cin >> from >> to;
        graph[from - 1].push_back(to - 1);
        graph[to - 1].push_back(from - 1);
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
    for(int i = 0; i < used.size(); i++)
    {
        cout << i + 1 << " " << used[i] << endl;
    }
    return 0;
}
