#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, k, v, k1 = 0, answer = 0, flag = 0;
    cin >> n >> v >> k;
    for(int i = 0; i < n; i++)
    {
        if(v - k1 > 0)
        {
            answer += (v - k1);
            k1 += k;
        }
        else
        {
            flag++;
            break;
        }
    }
    if(flag > 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    cout << " " << answer;
    return 0;
}
