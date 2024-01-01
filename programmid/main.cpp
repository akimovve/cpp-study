#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int mas[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> mas[i][j];
        }
    }
    int mas1[m][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            mas1[j][n - i - 1] = mas[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << mas1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
