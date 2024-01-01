#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string str, str1;
    cin >> str;
    int x, b = 0;
    vector<int> number;
    for(int i = 0; i < str.size(); i++)
    {
        number.push_back(str[i] - '0');
    }
    cin >> str1;
    vector<int> number1;
    for(int i = 0; i < str1.size(); i++)
    {
        number1.push_back(str1[i] - '0');
    }
    if(str.size() > str1.size())
    {
        x = str.size() - str1.size();
        for(int i = 0; i < x; i++)
        {
            number1.insert(number1.begin(), 0);
        }
    }
    else
    {
        x = str1.size() - str.size();
        for(int i = 0; i < x; i++)
        {
            number.insert(number.begin(), 0);
        }
    }
    vector<int> number_help;
    vector<int> number_s;
    number_s.resize(max(str.size(), str1.size()) + 1);
    number_help.resize(max(str.size(), str1.size()) + 1);
    number_s[max(str.size(), str1.size())] = (number1[max(str.size(), str1.size()) - 1] + number[max(str.size(), str1.size()) - 1]) % 10;
    number_help[b] = number1[max(str.size(), str1.size()) - 1] + number[max(str.size(), str1.size()) - 1];
    for(int i = max(str.size(), str1.size()) - 1; i > 0; i--)
    {
        number_s[i] = (number[i - 1] + number1[i - 1] + number_help[b] / 10) % 10;
        b++;
        number_help[b] = (number[i - 1] + number1[i - 1] + number_help[b - 1] / 10);
    }
    b++;
    number_s[0] = (number1[0] + number[0] + number_help[b - 1] / 10) / 10;
    if(number_s[0] == 0)
    {
        for(int i = 1; i < number_s.size(); i++)
        {
            cout << number_s[i];
        }
    }
    else
    {
        for(auto i : number_s)
        {
            cout << i;
        }
    }
    return 0;
}
