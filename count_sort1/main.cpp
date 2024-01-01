#include <iostream>
#include <vector>

using namespace std;



int main()
{
    int n, max1, max2 = 0;
    cin >> n;
    vector < int > vect(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    for(int i = 0; i < n; i++)
    {
        max1 = vect[0];
        max2 = 0;
        for(int j = 0; j < n - i; j++)
        {
            if(vect[j] > max1)
            {
                max1 = vect[j];
                max2 = j;
            }
        }
        swap(vect[max2], vect[n-i - 1]);
    }
    for(int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    return 0;
}
