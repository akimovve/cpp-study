#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    string s;
    cin >> s;
    char c;
    int ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = 0; j < s.size(); j++)
        {
            if(s[i] == s[j])
            {
                ans++;
            }
        }
        if(ans == 2)
        {
            c = s[i];
        }
        ans = 0;
    }
    cout << c;
    return 0;
}
