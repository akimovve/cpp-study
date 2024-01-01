#include <iostream>
#include <vector>
using namespace std;

vector <vector <int >> read(int n, int m)
{
    vector <vector <int >> a(n, vector <int> (m));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    return a;
}

/*void write(vector <vector <int >> a, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}*/

vector < int > find_min_str(vector < vector < int >> a, int n, int m)
{
    vector < int > minstr(n);
    int min1 = 1001;
    for(int i = 0; i < n; i++)
    {
        min1 = 1001;
        for(int j = 0; j < m; j++)
        {
            min1 = min(min1, a[i][j]);
        }
        minstr[i] = min1;
    }
    return minstr;
}

vector < int > find_max_row(vector < vector < int >> a, int n, int m)
{
    vector < int > maxrow(n);
    int max1 = -1001;
    for(int i = 0; i < m; i++)
    {
        max1 = -1001;
        for(int j = 0; j < n; j++)
        {
            max1 = max(max1, a[j][i]);
        }
        maxrow[i] = max1;
    }
    return maxrow;
}

/*void print_vector(vector < int > a)
{
    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}*/

int find_ans(vector < vector < int >> a, int n, int m, vector < int > minstr, vector < int > maxrow)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == minstr[i] && a[i][j] == maxrow[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector <vector <int >> a(n, vector <int> (m));
    a = read(n, m);
    vector <int > min_str(n), max_row(m);
    min_str = find_min_str(a, n, m);
    max_row = find_max_row(a, n, m);
    cout << find_ans(a, n, m, min_str, max_row);
    return 0;
}
