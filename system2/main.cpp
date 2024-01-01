#include <iostream>

using namespace std;

int system2(string s, int sys)
{
    unsigned long long answer = 0, s1;
    for(int i = 0; i < s.size(); i++)
    {
        if(i == 0)
        {
            s1 = 1;
        }
        else
        {
            s1 = sys;
            for(int j = 0; j < i - 1; j++)
            {
                s1 = s1 * 2;
            }
        }
        answer += s1 * (s[s.size() - i - 1] - '0');
    }
    return answer;
}

int main()
{
    int n;
    unsigned long long x;
    cin >> n;
    string mas[n];
    for(int i = 0; i < n; i++)
    {
        cin >> mas[i];
    }
    for(int i = 0; i < n; i++)
    {
        x = system2(mas[i], 2);
        cout << x << " ";
        if(x % 7 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
