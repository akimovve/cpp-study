#include <iostream>
#include <vector>
using namespace std;

struct ch
{
    int num1;
    int num2;
};

int main()
{
    long long n;
    cin >> n;
    vector <int> v;
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long k;
    cin >> k;
    vector <ch> chs;
    chs.resize(k);
    for(int i = 0; i < k; i++)
    {
        cin >> chs[i].num1 >> chs[i].num2;
    }
    vector <int> v1;
    v1.resize(n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            if(v[i] == chs[j].num1)
            {
                v1[i] = chs[j].num2;
                break;
            }
            else
            {
                v1[i] = v[i];
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    return 0;
}
