#include <iostream>
#include <clocale>
#include <string>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");
    string s, s1;
    int cow = 0, b = 0;
    cin >> s >> s1;
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = 0; j < s1.size(); j++)
        {
            if(s[i] == s1[j])
            {
                if(i == j)
                {
                    b++;
                }
                else
                {
                    cow++;
                }
            }
        }
    }
    cout << b << " " << cow;
    return 0;
}
