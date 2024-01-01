#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int mas[n];
    for(int i = 0; i < n; i++)
    {
        cin >> mas[i];
    }
    cin >> k;
    int mas1[k];
    for(int i = 0; i < k; i++)
    {
        cin >> mas1[i];
    }
    for(int i = 0; i < k; i++)
    {
        mas[mas1[i] - 1]--;
    }
    for(int i = 0; i < n; i++)
    {
        if(mas[i] < 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
