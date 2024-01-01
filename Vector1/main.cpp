#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector < vector < char >> vect (n, vector < char > (n, 'q'));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
}

