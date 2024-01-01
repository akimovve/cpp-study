#include <iostream>
#include <vector>

using namespace std;



int main()
{
    int n;
    cin >> n;
    vector < int > vect(n);
    int min1 = 2000000000, max1 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> vect[i];
        min1 = min(min1, vect[i]);
        max1 = max(max1, vect[i]);
    }
    vector < int > vect1(max1 - min1 + 1);
    for(int i = 0; i < n; i++)
    {
        vect1[vect[i] - min1]++;
    }
    for(int i = 0; i < max1 - min1 + 1; i++)
    {
        cout << i + min1 << " : " << vect1[i] << endl;
        if(vect1[i] % 3 != 0)
        {
            cout << i + min1 << endl;
        }
    }
    return 0;
}
