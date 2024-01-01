#include <iostream>
#include <vector>

using namespace std;

void space()
{
    for (int i = 0; i < 5; i++)
    {
        cout << endl;
    }
}

int check_x(vector<vector<char>> mas, int ShipSize)
{
    vector<vector<int>> mas1(10, vector<int>(10));
    int cnt = 0, cnt1 = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (mas[i][j] == '.')
            {
                if (cnt1 == ShipSize)
                {
                    cnt++;
                }
                cnt1 = 0;
            }
            else
            {
                mas1[i][j] = 1;
                cnt1++;
            }
        }
        if (cnt1 == ShipSize)
        {
            cnt++;
        }
        cnt1 = 0;
    }
    return cnt;
}

int check_y(vector<vector<char>> mas, int ShipSize)
{
    vector<vector<int>> mas1(10, vector<int>(10));
    int cnt = 0, cnt1 = 0;
    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (mas[i][j] == '.')
            {
                if (cnt1 == ShipSize)
                {
                    cnt++;
                }
                cnt1 = 0;
            }
            else
            {
                mas1[i][j] = 1;
                cnt1++;
            }
        }
        if (cnt1 == ShipSize)
        {
            cnt++;
        }
        cnt1 = 0;
    }
    return cnt;
}

int main()
{
    vector<vector<char>> x(10, vector<char>(10));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> x[i][j];
        }
    }
    space();
    vector<vector<char>> x1(10, vector<char>(10));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> x1[i][j];
        }
    }
    space();
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << x[i][j];
        }
        cout << endl;
    }
    space();
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << x1[i][j];
        }
        cout << endl;
    }
    cout << " " << check_x(x, 4) << " " << check_y(x, 4) << " " << check_x(x1, 4) << " " << check_y(x1, 4);
    return 0;

}
/*
..........
..........
..........
..........
..........
..........
..........
..........
..........
..........
*/
