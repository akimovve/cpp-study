#include <iostream>
#include <vector>

using namespace std;

void fib(int n1, vector < int > vect1)
{
    if(n1 == -1)
    {
        return;
    }
    cout << vect1[n1] << " ";
    fib(--n1, vect1);
}

int main()
{
    vector < int > vect;
    vect.resize(5);
    for(int i = 0; i < 5; i++)
    {
        cin >> vect[i];
    }
    fib(vect.size() - 1, vect);


    return 0;
}
