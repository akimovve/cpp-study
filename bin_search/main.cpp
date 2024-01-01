#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m;
    vector < int > vect(m + 1);
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a <= m)
        {
            vect[a]++;
        }
    }
    for(int i = 0; i < m+1; i++)
    {
        cout << i << ": " << vect[i] << endl;
    }
    vector < vector < int >> vect1(n, vector < int > (n));
    return 0;
}
