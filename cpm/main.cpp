#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;



int main()
{
    int n;
    cin >> n;
    vector < int > vect(n + 1);
    vect[0] = 1;
    vect[1] = 0;
    vect[2] = 1;
    for(int i = 3; i <= n; i++)
    {
        vect[i] = vect[i-2] + vect[i-3];
    }
    cout << vect[n];
    return 0;
}
