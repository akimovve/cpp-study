#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n, m, k, a, b;
    cin >> n >> m;
    cin >> k;
    vector < vector < char >> vect(n, vector < char > (m, '9'));
    vector < vector < int >> vect1(k, vector < int > (2));
    vector < vector < int >> vect2(n, vector < int > (m, 6000));
    for(int i = 0; i < k; i++)
    {
        cin >> a >> b;
        vect[a-1][b-1] = 'v';
        vect1[i][0] = a - 1;
        vect1[i][1] = b - 1;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            for(int h = 0; h < k; h++)
            {
                if(vect[i][j] != 'v' && (abs(vect1[h][0] - i) + abs(vect1[h][1] - j)) < vect2[i][j])
                {
                    vect2[i][j] = abs(vect1[h][0] - i) + abs(vect1[h][1] - j);
                }
            }
        }
    }
    int max1 = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(vect[i][j] != 'v')
            {
                max1 = max(max1, vect2[i][j]);
            }
        }
    }
    cout << max1;
    return 0;
}
