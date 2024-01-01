#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, answer = 0, answer1 = 0;
    cin >> n;
    vector<vector<char>> x(n, vector<char>(n));
    vector<vector<int>> x1(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x[i][j];
            if (x[i][j] == 'C')
            {
                answer++;
            }
        }
    }
    answer1 = answer / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (answer1 > 0)
            {
                x1[i][j] = 1;
                if (x[i][j] == 'C')
                {
                    answer1--;
                }
            }
            else
            {
                x1[i][j] = 2;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << x1[i][j];
        }
        cout << endl;
    }
    return 0;
}
