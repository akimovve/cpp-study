#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string system1(int num, int sys)
{
    string st = "";
    while(num > 1)
    {
        st.push_back(num % sys + '0');
        num = num / sys;
    }
    st.push_back(num % sys + '0');
    reverse(st.begin(), st.end());
    return st;
}

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
                s1 = s1 * sys;
            }
        }
        answer += s1 * (s[s.size() - i - 1] - '0');
    }
    return answer;

}

int main()
{
    int number, flag = 0, max1 = 0;
    string s;
    getline(cin, s);
    int mas[s.size()];
    for(int i = 0; i < s.size(); i++)
    {
        mas[i] = int(s[i]);
    }
    if(s == "")
    {
        cout << -1;
    }
    else
    {
        for(int i = 0; i < s.size(); i++)
        {
            if(mas[i] < 48 || mas[i] > 90 || (mas[i] > 57 && mas[i] < 65) || s[i] == ' ')
            {
                flag++;
            }
            else
            {
                max1 = max(max1, mas[i]);
            }
        }
        if(flag == 0)
        {
            if(max1 > 58)
            {
                cout << max1 - 54;
            }
            else
            {
                cout << max1 - 47;
            }
        }
        else
        {
            cout << -1;
        }
    }
    return 0;
}
