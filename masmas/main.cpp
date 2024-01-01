#include <iostream>

using namespace std;

int main()
{
    int n, k, s, s1;
    int mas[n];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> mas[i];
    }
    cin >> k;
    int mas1[2 * k];
    for(int i = 0; i < k; i++)
    {
        cin >> s >> s1;
        mas1[i * 2] = s - 1;
        mas1[i * 2 + 1] = s1 - 1;
    }
    cout << mas[4] << endl;
    for(int i = 0; i < k; i++)
    {
        for(int j = mas1[i * 2]; j <= mas1[i * 2 + 1]; j++)
        {
            cout << j << " ";
            cout << mas[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
