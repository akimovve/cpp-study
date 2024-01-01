#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, n1, answer = 0, flag = 1;
    cin >> n;
    vector <int> myVector;
    for (int i = 0; i < n; i++)
    {
        cin >> n1;
        myVector.push_back(n1);
    }
    for (int i = 0; i < n; i++)
    {
            flag = 1;
            for(int j = 0; j < n; j++)
            {
                if(i != j && myVector[i] == myVector[j])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag != 0)
            {
                cout << myVector[i] << " ";
            }
    }
    return 0;
}

