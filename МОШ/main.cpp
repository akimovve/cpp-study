#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    long long n, s, sym = 0, cnt = 0, x;
    cin >> n >> s;
    bool cnt1 = true;
    vector < int > vect(n);
    vector < int > vect1(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    while(cnt1)
    {
        sym = 0;
        cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(vect[i] != -1)
            {
                sym += vect[i];
                cnt++;
            }
        }
        if(sym % cnt == 0)
        {
            x = sym / cnt;
        }
        else
        {
            x = sym / cnt + 1;
        }
        cnt1 = false;
        for(int i = 0; i < n; i++)
        {
            if(vect[i] + s < x && vect[i] > -1)
            {
                vect1[i] = vect[i] + s;
                vect[i] = -1;
                cnt1 = true;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(vect1[i] == 0)
        {
            vect1[i] = x;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << vect1[i] << " ";
    }
    return 0;
}
