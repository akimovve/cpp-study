#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    int n, cnt = 0, k;
    cin >> n;
    vector < int > vect(n);
    vect[0] = rand() % (n - 1) + 1;
    for(int i = 1; i < n; i++)
    {
        vect[i] = rand() % (n - 1) + 1;
        while(k == 0)
        {
            for(int j = 0; j < i; j++)
            {
                if(vect[i] == vect[j])
                {
                    cnt++;
                    break;
                }
            }
            if(cnt > 0)
            {
                vect[i] = rand() % (n - 1) + 1;
                cnt = 0;
            }
            else
            {
                k = 1;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    return 0;
}
