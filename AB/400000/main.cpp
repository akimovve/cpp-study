#include <iostream>

using namespace std;

int main()
{
    int n, answer = 0, answer1 = 0, answer2, answer4 = 0, z = 0;
    cin >> n;
    char x[n][n];
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
    answer2 = 0;
    int x1[n][n];
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (x[i][j] == 'C')
            {
                answer2++;
            }
        }
    }
    if (answer2 == answer1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (n - 1 > i && n - 1 > j && j > 0 && i > 0)
                {
                    x1[i][j] = 1;
                }
                else
                {
                    x1[i][j] = 2;
                }
            }
        }
    }
    int b = 0;
    if (answer2 > answer1)
    {
        for (int i = 1; i < n - 1; i++)
        {
            for (int j = 1; j < n - 1; j++)
            {
                if (b < answer1)
                {
                    x1[i][j] = 1;
                }
                b++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (x1[i][j] != 1)
                {
                    x1[i][j] = 2;
                }
            }
        }
    }
    if (answer2 < answer1)
    {
        answer4 = answer1 - answer2;
        for (int i = 1; i < n - 1; i++) // левая сторона
        {
            if (x[i][0] == 'C')
            {
                if (answer4 > 0)
                {
                    x1[i][0] = 1;
                    answer4--;
                }
                else
                {
                    break;
                }
                z++;
            }
            if (x[i][0] != 'C' && z != 0)
            {
                x1[i][0] = 1;
            }
        }
        z = 0;
        for (int i = 1; i < n - 1; i++)  // середина
        {
            for (int j = 1; j < n - 1; j++)
            {
                x1[i][j] = 1;
            }
        }
        if (answer4 > 0 && x[n - 1][0] == 'C')  // левый нижний угол
        {
            x1[n - 2][0] = 1;
            x1[n - 1][0] = 1;
            answer4--;
        }
        if (answer4 > 0 && x[n - 1][0] == 'D')  // левый нижний угол
        {
            x1[n - 2][0] = 1;
            x1[n - 1][0] = 1;
        }
        for (int i = 1; i < n - 1; i++) // нижняя сторона
        {
            if (x[n - 1][i] == 'C')
            {
                if (answer4 > 0)
                {
                    x1[n - 1][i] = 1;
                    answer4--;
                }
                else
                {
                    break;
                }
                z++;
            }
            if (x[n - 1][i] != 'C' && z != 0)
            {
                x1[n - 1][i] = 1;
            }
        }
        z = 0;
        if (answer4 > 0 && x[n - 1][n - 1] == 'C')  // правый нижний угол
        {
            x1[n - 1][n - 2] = 1;
            x1[n - 1][n - 1] = 1;
            answer4--;
        }
        if (answer4 > 0 && x[n - 1][n - 1] == 'D')  // правый нижний угол
        {
            x1[n - 1][n - 2] = 1;
            x1[n - 1][n - 1] = 1;
        }
        for (int i = 1; i < n - 1; i++) // правая сторона
        {
            if (x[i][n - 1] == 'C')
            {
                if (answer4 > 0)
                {
                    x1[i][n - 1] = 1;
                    answer4--;
                }
                else
                {
                    break;
                }
                z++;
            }
            if (x[i][n - 1] != 'C' && z!= 0)
            {
                x1[i][n - 1] = 1;
            }
        }
        if (answer4 > 0 && x[0][n - 1] == 'C')  // правый верхний угол
        {
            x1[1][n - 1] =1;
            x1[0][n - 1] = 1;
            answer4--;
        }
        if (answer4 > 0 && x[0][n - 1] == 'D')  // правый верхний угол
        {
            x1[1][n - 1] =1;
            x1[0][n - 1] = 1;
        }
        z = 0;
        for (int i = 1; i < n - 1; i++) // верхняя сторона
        {
            if (x[0][i] == 'C')
            {
                if (answer4 > 0)
                {
                    x1[0][i] = 1;
                    answer4--;
                }
                else
                {
                    break;
                }
                z++;
            }
            if (x[0][i] != 'C' && z != 0)
            {
                x1[0][i] = 1;
            }
        }
        if (answer4 > 0 && x[0][0] == 'C')  // левый верхний угол
        {
            x1[0][1] = 1;
            x1[0][0] = 1;
            answer4--;
        }
        if (answer4 > 0 && x[0][0] == 'D')  // левый верхний угол
        {
            x1[0][1] = 1;
            x1[0][0] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (x1[i][j] != 1)
                {
                    x1[i][j] = 2;
                }
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
