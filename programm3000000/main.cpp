#include <iostream>

using namespace std;

int main()
{
    int n, n1, k = 0;
    cin >> n >> n1;
    char x[n][n1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> x[i][j];
        }
    }
    int x1[n][n1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> x1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (x1[i][j] == 1 && x[i][j] == 'G' || x1[i][j] == 1 && x[i][j] == 'R' || x1[i][j] == 2 && x[i][j] == 'R' || x1[i][j] == 2 && x[i][j] == 'B' || x1[i][j] == 3 && x[i][j] == 'R' || x1[i][j] == 4 && x[i][j] == 'B' || x1[i][j] == 4 && x[i][j] == 'G' || x1[i][j] == 5 && x[i][j] == 'G' || x1[i][j] == 6 && x[i][j] == 'B' || x1[i][j] == 6 && x[i][j] == 'G' || x1[i][j] == 6 && x[i][j] == 'R' || x1[i][j] == 6 && x[i][j] == 'B')
            {
                if (k == 0)
                {
                    cout << "NO";
                }
                k = 1;
                break;
            }
        }
    }
    if (k == 0)
    {
        cout << "YES";
    }
    return 0;
}
