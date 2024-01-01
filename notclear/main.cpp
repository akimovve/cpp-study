#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int max1 = 0, max2 = 0, maxh;
    for(int i = 0; i < s.size() - 1; i++)
    {
        for(int j = 0; j < s.size(); j++)
        {
            if(s[i] == s[j])
            {
                max2++;
            }
        }
        if(max1 <= max2)
        {
            maxh = i;
            max1 = max2;
        }
        max2 = 0;
    }
    cout << max1 << " " << maxh;
    return 0;
}
