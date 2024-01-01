#include <iostream>
#include <vector>

using namespace std;
void read(vector < vector < char >> &v1)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> v1[i][j];
        }
    }
}
int solve_x(vector < vector < char >> v1)
{
    int answer = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(v1[i][j] == 'X')
            {
                answer++;
            }
        }
    }
    return answer;
}
int solve_o(vector < vector < char >> v1)
{
    int answer = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(v1[i][j] == 'O')
            {
                answer++;
            }
        }
    }
    return answer;
}
int solve_x_win(vector < vector < char >> v1)
{
    if (v1[0][0] == 'X' && v1[0][1] == 'X' && v1[0][2] == 'X' ||
        v1[0][0] == 'X' && v1[1][0] == 'X' && v1[2][0] == 'X' ||
        v1[1][0] == 'X' && v1[1][1] == 'X' && v1[1][2] == 'X' ||
        v1[2][0] == 'X' && v1[2][1] == 'X' && v1[2][2] == 'X' ||
        v1[0][1] == 'X' && v1[1][1] == 'X' && v1[2][1] == 'X' ||
        v1[0][2] == 'X' && v1[1][2] == 'X' && v1[2][2] == 'X' ||
        v1[0][0] == 'X' && v1[1][1] == 'X' && v1[2][2] == 'X' ||
        v1[0][2] == 'X' && v1[1][1] == 'X' && v1[2][0] == 'X')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int solve_o_win(vector < vector < char >> v1)
{
    if (v1[0][0] == 'O' && v1[0][1] == 'O' && v1[0][2] == 'O' ||
        v1[0][0] == 'O' && v1[1][0] == 'O' && v1[2][0] == 'O' ||
        v1[1][0] == 'O' && v1[1][1] == 'O' && v1[1][2] == 'O' ||
        v1[2][0] == 'O' && v1[2][1] == 'O' && v1[2][2] == 'O' ||
        v1[0][1] == 'O' && v1[1][1] == 'O' && v1[2][1] == 'O' ||
        v1[0][2] == 'O' && v1[1][2] == 'O' && v1[2][2] == 'O' ||
        v1[0][0] == 'O' && v1[1][1] == 'O' && v1[2][2] == 'O' ||
        v1[0][2] == 'O' && v1[1][1] == 'O' && v1[2][0] == 'O')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    vector < vector < char >> v(3, vector< char > (3));
    read(v);
    if(solve_x(v) - solve_o(v) == 0 || solve_x(v) - solve_o(v) == 1)
    {
        if(solve_x_win(v) == 1)
        {
            cout << "Win";
        }
        else if(solve_o_win(v) == 1)
        {
            cout << "Lose";
        }
        else
        {
            cout << "Draw";
        }
    }
    else
    {
        cout << "Bad game";
    }
    return 0;
}
