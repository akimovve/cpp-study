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
    int mas1[n];
    for(int i = 0; i < n; i++)
    {
        int z = (i + n - k) % n;
        mas1[i] = mas[z];
    }
    for(int i = 0; i < n; i++)
    {
        cout << mas1[i] << " ";
    }
    return 0;
}
