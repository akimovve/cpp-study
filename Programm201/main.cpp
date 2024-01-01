#include <iostream>
using namespace std;
int main() {
    int n, m, answer = 0;
    cin >> n >> m;
    char x[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x[i][j];
        }
    }
    char x1[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x[i][j] != x1[i][j])
            {
                if (x[i][j] != '.' && x1[i][j] != '.')
                {
                    answer += 2;
                }
                else
                {
                    answer++;
                }
            }
        }
    }
    char mas[answer / 2];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x[i][j] != x1[i][j])
            {
                if (x[i][j] != '.')
                {
                    int flag = 0;
                    for (int z = 0; z < k; z++)
                    {
                        if (mas[z] == x[i][j])
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if (flag == 0)
                    {
                        mas[k] = x[i][j];
                        k++;
                    }
                }
                if (x1[i][j] != '.')
                {
                    int flag = 0;
                    for (int z = 0; z < k; z++)
                    {
                        if (mas[z] == x1[i][j])
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if (flag == 0)
                    {
                        mas[k] = x1[i][j];
                        k++;
                    }
                }
            }
        }
    }
    int l = 0, L = 0;
    for (int i = 0; i < answer / 2; i++)
    {
        if (mas[i] == 'q' || mas[i] == 'w' || mas[i] == 'e' || mas[i] == 'r' || mas[i] == 't' || mas[i] == 'y' || mas[i] == 'u' ||
            mas[i] == 'i' || mas[i] == 'o' || mas[i] == 'p' || mas[i] == 'a' || mas[i] == 's' || mas[i] == 'd' ||
            mas[i] == 'f' || mas[i] == 'g' || mas[i] == 'h' || mas[i] == 'j' || mas[i] == 'k' || mas[i] == 'l' ||
            mas[i] == 'z' || mas[i] == 'x' || mas[i] == 'c' || mas[i] == 'v' || mas[i] == 'b' || mas[i] == 'n' || mas[i] == 'm')
        {
            l++;
        }
        else
        {
            L++;
        }
    }
    char masl[l];
    char masL[L];
    k = 0;
    int k1 = 0;
    for (int i = 0; i < answer / 2; i++)
    {
        if (mas[i] == 'q' || mas[i] == 'w' || mas[i] == 'e' || mas[i] == 'r' || mas[i] == 't' || mas[i] == 'y' || mas[i] == 'u' ||
            mas[i] == 'i' || mas[i] == 'o' || mas[i] == 'p' || mas[i] == 'a' || mas[i] == 's' || mas[i] == 'd' ||
            mas[i] == 'f' || mas[i] == 'g' || mas[i] == 'h' || mas[i] == 'j' || mas[i] == 'k' || mas[i] == 'l' ||
            mas[i] == 'z' || mas[i] == 'x' || mas[i] == 'c' || mas[i] == 'v' || mas[i] == 'b' || mas[i] == 'n' || mas[i] == 'm')
        {
            masl[k] = mas[i];
            k++;
        }
        else
        {
            masL[k1] = mas[i];
            k1++;
        }
    }
    cout << answer / 2 << endl;
    int minl = 123;
    for (int j = 0; j < l; j++)
    {
        minl = 123;
        for (int i = 0; i < l; i++)
        {
            minl = min(minl, int(masl[i]));
        }
        cout << char(minl);
        for (int i = 0; i < l; i++)
        {
            if (masl[i] == char(minl))
            {
                masl[i] = 123;
                break;
            }
        }
    }
    int minL = 91;
    for (int j = 0; j < L; j++)
    {
        minL = 91;
        for (int i = 0; i < L; i++)
        {
            minL = min(minL, int(masL[i]));
        }
        cout << char(minL);
        for (int i = 0; i < L; i++)
        {
            if (masL[i] == char(minL))
            {
                masL[i] = 91;
                break;
            }
        }
    }
    return 0;
}
/*
3 4
asd.
QD..
UAov

ads.
DU.A
Q.ov
*/

