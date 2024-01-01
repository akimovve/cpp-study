#include <iostream>
#include <vector>

using namespace std;


void read_1(vector <int> &v)
{
    int n;
    n = v.size();
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}
void write_1(vector <int> v)
{
    int n;
    n = v.size();
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void read_2(vector < vector <int>> &v)
{
    int n, m;
    n = v.size();
    for(int i = 0; i < n; i++)
    {
        m = v[i].size();
        for(int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
}
void write_2(vector< vector <int>> v)
{
    int n, m;
    n = v.size();
    for(int i = 0; i < n; i++)
    {
        m = v[i].size();
        for(int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
void solve_min_max1(vector< vector <int >> v, int st)
{
    int min1 = 2000000000, max1 = -2000000000;
    vector <int> v1(v[st].size());
    for(int i = 0; i < v[st].size(); i++)
    {
        v1[i] = v[st][i];
    }
    for(int i = 0; i < v1.size(); i++)
    {
        min1 = min(min1, v1[i]);
        max1 = max(max1, v1[i]);
    }
    cout << min1 << " ";
    cout << max1 << endl;
}
void solve_min_max2(vector< vector <int >> v, int raw)
{
    int min1 = 2000000000, max1 = -2000000000;
    vector <int> v1(v.size());
    for(int i = 0; i < v.size(); i++)
    {
        v1[i] = v[i][raw];
    }
    for(int i = 0; i < v1.size(); i++)
    {
        min1 = min(min1, v1[i]);
        max1 = max(max1, v1[i]);
    }
    cout << min1 << " ";
    cout << max1 << endl;

}
/*
int solve_min1(vector <int> v)
{
    int n, min1 = 2000000000;
    n = v.size();
    for(int i = 0; i < n; i++)
    {
        min1 = min(min1, v[i]);
    }
    return min1;
}
int solve_max1(vector <int> v)
{
    int n, max1 = -2000000000;
    n = v.size();
    for(int i = 0; i < n; i++)
    {
        max1 = max(max1, v[i]);
    }
    return max1;
}
int solve_max2(vector< vector <int>> v)
{
    int n, m, max1 = -2000000000;
    n = v.size();
    for(int i = 0; i < n; i++)
    {
        m = v[i].size();
        for(int j = 0; j < m; j++)
        {
            max1 = max(max1, v[i][j]);
        }
    }
    return max1;
}
int solve_min2(vector< vector <int>> v)
{
    int n, m, min1 = 2000000000;
    n = v.size();
    for(int i = 0; i < n; i++)
    {
        m = v[i].size();
        for(int j = 0; j < m; j++)
        {
            min1 = min(v[i][j], min1);
        }
    }
    return min1;
}*/
int main()
{
    int m, m1, str1, raw1;
    cin >> m >> m1;
    cin >> str1 >> raw1;
    vector< vector <int>> v2(m, vector <int> (m1));
    read_2(v2);
    solve_min_max1(v2, str1);
    solve_min_max2(v2, raw1);
    return 0;
}
/*
4 5
1 4
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
*/
