#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int answer = 0;
    getline(cin, s);
    for(auto c : s)
    {
        if(isspace(c))
        {
            answer++;
        }
    }
    cout << answer + 1;
}
