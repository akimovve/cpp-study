#include <iostream>
#include <vector>

using namespace std;

vector < vector < int >> graph;
vector < int > used;
vector < int > path;
vector < int > path_1;

void DFS(int curV, int fin, int from)
{
    if(used[curV] != 0)
    {
        return;
    }
    used[curV] = 1;
    path.resize(curV + 1);
    path[curV] = from;
    if(curV == fin)
    {
        return;
    }
    for(int i = 0; i < graph[curV].size(); i++)
    {
        DFS(graph[curV][i], fin, curV);
    }

}


void make_p(int from, int to)
{
    path_1.resize(1);
    path_1[0] = to - 1;
    while(path_1[path_1.size() - 1] != from - 1)
    {
        int b = path_1.size() - 1;
        path_1.push_back(path[path_1[b]]);
        path_1.resize(b + 2);
    }
    for(int i = path_1.size() - 1; i >= 0; i--)
    {
        cout << path_1[i] + 1 << " ";
    }
    cout << endl;
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

    }
    cin >> from >> to;
    DFS(from - 1, to - 1, from - 1);
    make_p(from, to);
    cout << used[to - 1];
    return 0;
}
