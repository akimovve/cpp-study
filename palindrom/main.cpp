#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    string str, str_answer = "";
    cin >> n;
    cin >> str;
    char max1 = 'A', min1 = 'Z';
    for(int i = 0; i < n; i++)
    {
        min1 = min(min1, str[i]);
        max1 = max(max1, str[i]);
    }
    vector < int > vect1(max1 - min1 + 1);
    for(int i = 0; i < n; i++)
    {
        vect1[str[i] - min1]++;
    }
    int k = 0, k1 = 0;
    int max2 = 0;
    char max2_1 = ' ';
    for(int i = 0; i < max1 - min1 + 1; i++)
    {
        //cout << char(i + min1) << " : " << vect1[i] << endl;
        if(vect1[i] % 2 == 1)
        {
            if(vect1[i] > max2)
            {
                max2 = vect1[i];
                max2_1 = char(i + min1);
            }
        }
    }
    //cout << max2 << " " << max2_1;
    for(int i = 0; i < max1 - min1 + 1; i++)
    {
        if(vect1[i] % 2 == 0)
        {
            while(vect1[i] != 0)
            {
                str_answer += char(i + min1);
                vect1[i] -= 2;
            }
        }
        else
        {
            if(char(i + min1) == max2_1)
            {
                while(vect1[i] != 1)
                {
                    str_answer += char(i + min1);
                }
            }
        }
    }
    if(max2_1 != ' ')
    {
        str_answer+= max2_1;
        int size1 = str_answer.size();
        for(int i = size1 - 2; i > -1; i--)
        {
            str_answer += str_answer[i];
        }
        cout << str_answer;
    }
    else
    {
        int size1 = str_answer.size();
        for(int i = size1 - 1; i > -1; i--)
        {
            str_answer += str_answer[i];
        }
        cout << str_answer;
    }
    return 0;
}
