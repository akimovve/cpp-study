//ÇÀÄÀ×À ÍÎÌÅÐ 3
/*#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char x;
    vector < char > vect;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> x;
            if(x != '.')
            {
                vect.push_back(x);
            }
        }
    }
    for(int i = 0; i < vect.size(); i++)
    {
        for(int j = 0; j < vect.size() - 1; j++)
        {
            if(vect[j] > vect[j + 1])
            {
                swap(vect[j], vect[j+1]);
            }
        }
    }
    int cnt = 1;
    for(int i = 1; i < vect.size(); i++)
    {
        if(vect[i] == vect[i-1])
        {
            cnt++;
        }
        else
        {
            cout << vect[i-1] << " " << cnt << endl;
            cnt = 1;
        }
    }
    cout << vect[vect.size() -1] << " " << cnt << endl;
    return 0;
}*/




//ÇÀÄÀ×À ÍÎÌÅÐ 4
/*#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char x;
    vector < int > vect(n);
    vector < vector < char >> ma(n, vector < char > (n, '-'));
    for(int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(vect[j] > vect[j + 1])
            {
                ma[i][j + 1] =  '+';
            }
        }
        for(int j = 0; j < n - 1; j++)
        {
            if(vect[j] > vect[j + 1])
            {
                swap(vect[j], vect[j+1]);
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << ma[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}*/




// ÇÀÄÀ×À ÍÎÌÅÐ 1
/*#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m, w, n, cnt = 0, cnt1 = 0;
    cin >> m >> w >> n;
    vector < vector < int >> vect(n, vector < int > (2));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> vect[i][j];
            if(j == 0)
            {
                cnt += vect[i][0];
            }
            else
            {
                cnt1 += vect[i][1];
            }
        }
    }
    cout << m - cnt << " " << w - cnt1;
    return 0;
}*/




// ÇÀÄÀ×À ÍÎÌÅÐ 2
/*#include <iostream>
#include <vector>

using namespace std;

vector < vector < int >> vect;
vector < int > used;
vector < int > vect1;
vector < int > vect2;
int cnt1 = 0, cnt2 = 0;

void DFS(int num, int cmp)
{
    if(used[num] != 0)
    {
        return;
    }
    used[num] = cmp;
    cnt1 += vect1[num];
    cnt2 += vect2[num];
    for(int i = 0; i < vect[num].size(); i++)
    {
        DFS(vect[num][i], cmp);
    }
}

int main()
{
    int n, a, b, m, w;
    cin >> n;
    vect.resize(n);
    used.resize(n);
    vect1.resize(n);
    vect2.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> m >> w;
        vect[a - 1].push_back(b - 1);
        vect[b - 1].push_back(a - 1);
        vect1[a - 1] = m;
        vect2[a - 1] = w;
    }
    int cmp = 1;
    for(int i = 0; i < n; i++)
    {
        if(used[i] == 0)
        {
            DFS(i, cmp);
            cout << i + 1 << " " << cnt1 << " " << cnt2 << endl;
            cnt1 = 0;
            cnt2 = 0;
            cmp++;
        }
    }
    return 0;
}*/
