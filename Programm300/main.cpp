#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n, m, k, x, y, size1, answer, w;
    cin >> n >> m >> k;
    answer = 0;
    bool s[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            s[i][j] = 0;
        }
    }
    for (int i = 0; i < k; i++)
    {
        cin >> x >> y >> size1;
        for (int j = 0; j < size1; j++)
        {
            for (int w = 0; w < size1; w++)
            {
                s[j + x][w + y] = 1;

            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 1)
            {
                answer++;
            }
        }
    }
    cout << n * m - answer << " - площадь незакрашенной части холста" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
