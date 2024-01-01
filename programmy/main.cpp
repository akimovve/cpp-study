#include <iostream>

using namespace std;

int f (int k)
{
    long long answer = 1;
    for(int i = 1; i <= k; i++)
    {
        answer = answer * i;
    }
    return answer;
}

int main()
{
    long long n, answer1 = 0, answer;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        answer = 1;
        for(int j = 1; j <= i; j++)
        {
            answer = answer * (n - j + 1);
        }
        answer1 += answer / f(i);
        cout << answer1 << " ";
    }
    cout << answer1;
    return 0;
}
