#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector < int > vect(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    for(int i = 0; i < n; i++)
    {
        int max1 = vect[0];
        int maxi = 0;
        for(int j = 0; j < n - i; j++)
        {
            if(max1 < vect[j])
            {
                max1 = vect[j];
                maxi = j;
            }
        }
        swap(vect[maxi], vect[n - i - 1]);
    }
    for(int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
}

