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
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(vect[j] < vect[j + 1])
            {
                swap(vect[j], vect[j + 1]);
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
}
