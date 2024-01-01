#include <iostream>

using namespace std;

/*int main()
{
    int n, k, r, g, b;
    char letter;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> letter;
        if(letter == 'r')
        {
            r++;
        }
        else if(letter == 'b')
        {
            b++;
        }
        else
        {
            g++;
        }
    }
    if(r + b <= k || r + g <= k || b + g <= k)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}*/
int main()
{
    int n, answerP = 0, answerV = 0;
    cin >> n;
    char mas[n];
    for(int i = 0; i < n; i++)
    {
        cin >> mas[i];
    }
    for(int i = 0; i < n - 2; i++)
    {
        if(mas[i] == '-' && mas[i+1] == '+' && mas[i+2] == '-')
        {
            answerP++;
        }
        else if(mas[i] == '+' && mas[i+1] == '-' && mas[i+2] == '+')
        {
            answerV++;
        }
    }
    if(answerP >= answerV)
    {
        cout << 1 << " P";
    }
    else
    {
        cout << 2 << " V";
    }
    return 0;
}
